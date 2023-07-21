#include<stdio.h>
void subset(int a[],int n,int b,int sol[])
{
    if(b==n)
    {
        for(int i=0;i<n;i++)
        {
            if(sol[i]==1)
            {
                printf("%d",a[i]);
            }
        }
        printf(" ");
    }
    else
    {
        sol[b]=1;
        subset(a,n,b+1,sol);
        sol[b]=0;
        subset(a,n,b+1,sol);
    }
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    int sol[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    subset(a,n,0,sol);
}
