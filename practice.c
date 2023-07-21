#include<stdio.h>
int main()
{
int i,j,num;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=1;j<=num;j++)
{
if(  i==j || i+j==num+1 || i==1 || i==num || j==1 || j==num)
{
printf("* ");
}
else
{
printf("  ");
}
}
printf("\n");
}
return 0;
}
