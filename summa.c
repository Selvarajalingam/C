#include<stdio.h>
int main()
{
    int n,m,i,a;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
       a=m*i;
       printf("%d\n",a);
    }
}
