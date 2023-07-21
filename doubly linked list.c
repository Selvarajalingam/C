#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head;
void insertion();
void display();
void main()
{
    int choice;
    printf("ENTER YPUR CHOICE :");
    scanf("%d",&choice);
    while(choice!=3)
    {
        switch(choice)
        {
        case 1: insertion();
        break;
        case 2: display();
        break;
        default:
            printf("INVALID CHOICE!!");
        }
    }
}
void insertion()
{
    int i,size=4;
   for(i=0;i<=size;i++)
   {
       int item;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr== NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("ITEM :");
        scanf("%d",&item);
        if(head==NULL)
        {
            ptr->prev=NULL;
            ptr->data=item;
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->data=item;
            ptr->next=NULL;
            ptr->next=head;
            head->prev=ptr;
            head=ptr;

        }
    }
   }
}
void display()
{
    struct node *ptr;
    while(ptr!=NULL)
    {
        ptr=head;
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
