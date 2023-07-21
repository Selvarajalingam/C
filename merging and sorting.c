#include<stdio.h>
int main()
{

    int num,num1,i;
    scanf("%d %d",&num,&num1);
    int a[num],b[num1];
    int j=0;
    int temp=0;
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num1;i++)
    {
        scanf("%d",&b[j]);
    }
    for(i=num;i<num+num1;i++)
    {
        a[i]=b[j];
        j++;
    }
    for(i=num;i<num+num1;i++)
    {
        for(j=i+1;j<num+num1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    for(i=0;i<num+num1;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",a[i]);
        }
    }

}
