#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*ptr,*headOne,*headTwo,*temp;
int main()
{
    int i;
	printf("Enter the list:\n");
	for(i=0;i<5;i++)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&ptr->data);
		ptr->next=NULL;
		if(headOne==NULL)
		{
			headOne=ptr;
			temp=ptr;
		}
		else
		{
			temp->next=ptr;
			temp=ptr;
		}

	}
	struct node*tail =temp;
	temp=NULL;
	printf("Enter second list:\n");
	for(i=0;i<5;i++)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->next=NULL;
		if(headTwo==NULL)
		{
			headTwo=ptr;
			temp=ptr;
		}
		else
		{
			temp->next=ptr;
			temp=ptr;
		}
	}
	tail->next=headTwo;
	temp=headOne;
	while(temp->next!=NULL)
	{
		struct node*secondNode=temp->next;
		while(secondNode!=NULL)
		{
			if(temp->data>secondNode->data)
			{
				int a=temp->data;
                temp->data = secondNode ->data;
				secondNode->data = a;
			}
			secondNode=secondNode->next;
		}
		temp=temp->next;
	}
	while(headOne!=NULL)
	{
		printf("%d",headOne->data);
		headOne=headOne->next;
	}
}
