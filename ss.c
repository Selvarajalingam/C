#include<stdio.h>
int main()
{
        int n,i,j,temp=0,temp1=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
                }

            }
        }
        for(i=0;i<n;i++)
        {
               temp1=temp*10+a[i];

        }
        int b;
        scanf("%d",&b);
        for(i=0;i<n;i++)
        {
            printf("%d",temp1+b);
        }

}
