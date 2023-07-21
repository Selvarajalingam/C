#include<stdio.h>
int main()
{
    int num,i,j,temp;
    scanf("%d",&num);
    int a[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=num-1;i<num/2;i++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    for(j=0;j<num;j++)
    {
        printf("%d",a[j]);
    }
    return 0;
}
