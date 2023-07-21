#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode;
int main()
{
    int size,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\nsearch element:");
        int s;
        scanf("%d",&s);
        int count=0;
        temp=head;
        while(temp!=NULL)
        {
            if(temp->data==s)
            {
                count=1;
            }
            else
            {
                count=0;
            }
            temp=temp->next;
        }
        if(count==0)
        {
            printf("found!");
        }
        else
        {
            printf("not found");
        }
         printf("\nmiddle:\n");
            int p;
            scanf("%d",&p);
         newnode=(struct node*)malloc(sizeof(struct node));
         scanf("%d",&newnode->data);
         newnode->next=NULL;
         temp=head;
         for(i=1;i<p-1;i++)
         {
             temp=temp->next;
         }
         newnode->next=temp->next;
         temp->next=newnode;
         temp=head;
         while(temp!=NULL)
         {
             printf("%d ",temp->data);
             temp=temp->next;
         }
}
