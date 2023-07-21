#include<stdio.h>
int main()
{
    int i,j,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
        if(num-i<j)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

    }
    printf("\n");
}
}
