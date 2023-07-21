#include<stdio.h>
int main()
{
 int i,num,temp,j;
 scanf("%d",&num);
 int a[num];
  for(i=0;i<num;i++)
  {
   scanf("%d",&a[i]);
  }

  for(i=0;i<num;i++)
  {
   for(j=0;j<num;j++)
   {
     if(a[i]<a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
   }
  }
  temp=num-1;j=0;
  for(i=0;i<num;i++)
  {
   if(i%2!=0){
    printf("%d ",a[j] ); ++j;}
    else{
    printf("%d ",a[temp] ); --temp;}
  }

 return 0;
}

