#include<stdio.h>
int main()
{
    int n,i,j,k,total;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&total);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=j;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==total)
                {
                    printf("%d %d %d",a[i],a[j],a[k]);
                    return 0;
                }
            }
        }
    }
    printf("false");
    return 0;
}
