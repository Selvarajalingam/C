#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
int a[num];
for(i=0;i<num;i++)
{
scanf("&d",&a[i]);
}
for(i=1;i<num;i++)
{
if((a[i-1]<a[i]) && (a[i+1]<a[i]))
printf("%d",a[i]);
}
return 0;
}
