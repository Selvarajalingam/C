#include<stdio.h>
int main()
{
    int n,i,j,mid,count=1,temp=0;
    scanf("%d",&n);
    mid=n/2;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {


            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {


        if(a[i]==a[j])
        {
            count++;
        }

        }
        if(count>mid)
        {
            printf("%d",a[i]);
        }
    }


}
