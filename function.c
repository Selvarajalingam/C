#include<stdio.h>
int sum(int *c,int *d)
{
    *c*=2;
    *d*=2;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *ptr = &a;
    int *ptr1 = &b;
    sum(ptr,ptr1);
    printf("%d %d",a,b);
}
