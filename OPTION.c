#include<stdio.h>
#define maxsize 10
int a[maxsize],n;
int main()
{
    int n,choice;
    printf("1 : create\n");
    printf("2 : display\n");
    printf("3 : insert\n");
    printf("4 : search\n");
    printf("5 : Delete\n");
    printf("6 : exit\n");
    printf("Enter the choice (1,2,3,4,5,6):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: create();
        break;
        case 2: display();
        break;
        case 3: insert();
        break;
        //case 4: search();
        break;
        case 5: Delete();
        break;
        //case 6:exit(0);
        break;
        default:("Invalid option");
    }
    return 0;
}
void create()
{
    int i;
    printf("enter number of element:\t");
    scanf("%d",&n);
    printf("enter array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
    create();
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void insert()
{
    create();
    int p,value,i;
    printf("enter the position:");
    scanf("%d",&p);
    printf("enter the value:");
    scanf("%d",&value);
    for(i=n;i>=p;i--)
    {
        a[i]=a[i-1];
        if(i==p)
        {
            a[i]=value;
        }
    }
    for(i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }
}
void Delete()
{
    create();
    int p,i;
    printf("enter the position:");
    scanf("%d",&p);
    for(i=p;i<n;i++)
    {
        a[i]=a[i+1];
        for(i=0;i<n-1;i++)
        {
            printf("%d",a[i]);
        }

    }
}





