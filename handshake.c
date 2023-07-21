#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int i,j;
    for(i=n-1;i>=0;i--)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
