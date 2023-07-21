#include<stdio.h>
int main()
{
int n,count,count1,i;
scanf("%d",&n);
int a[n];
count=0;
for( i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
count += a[i];
}
count1=0;
for(i=1;i<=n;i++)
{
count1 += i;
}
int sub = count1-count;
printf("%d",sub);
}
