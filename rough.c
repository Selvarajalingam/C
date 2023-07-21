#include<stdio.h>
int main()
{

    int num1,num2,k,i,j=0,res=0;
    scanf("%d %d %d",&num1,&num2,&k);
    int temp=1;
    for(i=0;i<num2;i++)
    {
        temp=temp*num1;
    }
    for(i=0;i<k;i++)
    {

        j=j*10+temp%10;
        temp=temp/10;
    }
    for(i=0;i<k;i++)
    {

        res=res*10+j%10;
        j=j/10;
    }
    printf("%d",res);

}
