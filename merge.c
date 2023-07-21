#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s[n];
    int a;
    scanf("%d",&a);
    int x=n+a;
    int z[x];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        z[i]=s[i];
    }
    int m[a];
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
        z[i]=m[i];
    }

    printf("%d",z[i]);


    return 0;


}
