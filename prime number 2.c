#include<stdio.h>
int main()
{
    int n,i,temp=0,m;
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("NOT A PRIME NUMBER");
            temp=1;
        }
    }
    if(temp==0)
    {
        printf("NUMBER IS PRIME");
    }
}

