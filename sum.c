#include<stdio.h>
int main()
{
    int target;
    scanf("%d",&target);
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if(sum==target)
                count++;
        }
    }
    if(count>0)
                printf("true\n");
            else
                printf("No 2 values sum up to %d\n",target);


    return 0;
}
