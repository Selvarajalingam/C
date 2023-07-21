#include<stdio.h>
int main()
{
    int i,j,num;
    scanf("%d",&num);
    int a[num][num],b[num][num],c[num][num];
    printf("a:\n");
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("b:\n");
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("c:\n");
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<num;i++)
    {printf(" \n");
        for(j=0;j<num;j++)
        {
            printf(" %d ",c[i][j]);
        }
    }

}
