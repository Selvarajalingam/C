#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int first=0,last=n-1,mid=(first+last)/2;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b;
    printf("search element :");
    scanf("%d",&b);
    while(first<=last)
    {

        if(b>a[mid])
        {
            first=mid+1;
        }
        else if(b==a[mid])
        {
            printf("element founded ");
        }
        else
        {
            last=mid-1;
        }
    }

}
