#include<stdio.h>
int main()
{
    int i,j,k,num,num1;
    scanf("%d %d",&num,&num1);
    int a[num][num1];
    int b[num][num1];
    for(i=0;i<num;i++)
    {
        for(j=0;j<num1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<num;i++)
    {
        j=0;
        for(k=num-1;k>=0;k--)
        {
            b[i][j]=a[k][i];
            j++;
        }
    }
    for(i=0;i<num;i++)
    {
        for(k=0;k<num1;k++)
        {
            printf("%d ",b[i][k]);
        }
        printf("\n");
    }
}
