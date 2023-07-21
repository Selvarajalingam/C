#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int water;
    int length=n-2;
    if(a[0]<a[n-1])
    {
        water=a[0]*length;
    }
    else
    {
        water=a[n-1]*length;
    }
    printf("%d",water);
}
