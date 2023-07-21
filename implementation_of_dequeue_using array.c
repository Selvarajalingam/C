#include<stdio.h>
#include<stdlib.h>
#define n 5
int front=-1,rear=-1;
int deque[n];
void enque_front(int element)
{
    if((front == 0 && rear == n-1)||(front==rear+1))
       {
           printf("the queue is overflow..");
       }
    else if(front==-1 && rear == -1)
    {
        front=rear=0;
        deque[front]=element;
    }
    else if(front==0)
    {
        front=n-1;
        deque[front]=element;
    }
    else
    {
        front--;
        deque[front]=element;
    }
}
void enque_rear(int element)
{
    if((front == 0 && rear == n-1)||(front==rear+1))
       {
           printf("the queue is overflow..");
       }
       else if(front==-1 && rear==-1)
       {
           front=rear=0;
           deque[front]=element;
       }
       else if(rear==n-1)
       {
           rear=0;
           deque[rear]=element;
       }
       else
       {
           rear++;
           deque[rear]=element;
       }
}
void deque_front(int element)
{
    if(front==-1&&rear==-1)
    {
        printf("queue is empty:");
    }
    else if(front==rear)
    {
        front=rear=-1;
        printf("the dequeued element:",deque[front]);
    }
    else if(front==n-1)
    {
        printf("the dequed element:",deque[front]);
        front=0;
    }
    else
    {
        printf("the dequed element:",deque[front]);
        front++;
    }
}
void deque_rear(int element)
{
    if(front==-1&&rear==-1)
    {
        printf("queue is empty:");
    }
    else if(front==rear)
    {
        front=rear=-1;
        printf("the dequeued element:",deque[rear]);
    }
    else if(rear==0)
    {
        printf("the dequed element:",deque[rear]);
        rear=n-1;
    }
    else
    {
        printf("the dequed element:",deque[rear]);
        rear--;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty:");
    }
    else
    {
        printf("elements are:");
        while(i!=rear)
        {
            printf("%d",deque[i]);
            i=(i+1)%n;
        }
        printf("%d")
    }
}
int main()
{
    int e,choice=1;



    while(choice<6 && choice!=0)
    {
       printf("\n Press 1: enqueue_front");
        printf("\nPress 2: enqueue_rear");
    printf("\nPress 3: dequeue_front");
    printf("\nPress 4: dequeue_rear");
    printf("\nPress 5: display the queue");
    printf("\nEnter your choice");
    scanf("%d", &choice);



    switch(choice)
    {

        case 1:

        printf("Enter the element which is to be inserted");
        scanf("%d", &e);
        enque_front(e);
        break;
        case 2:
        printf("Enter the element which is to be inserted");
        scanf("%d", &e);
        enque_rear(e);
        break;
        case 3:
        printf("Enter the element which is to be deleted");
        scanf("%d", &e);
        deque_front(e);
        break;
        case 4:
        printf("Enter the element which is to be deleted");
        scanf("%d", &e);
        deque_rear(e);
        break;
        case 5:
        display();
        break;

    }}
    return 0;
}
