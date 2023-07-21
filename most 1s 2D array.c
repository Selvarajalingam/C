#include<stdio.h>
int main()
{
    int num,num1;
    scanf("%d",&num);
    scanf("%d",&num1);
    int a[num][num1];
    int b[num];
    printf("\n");
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<num;i++)
    {
        int count=0;
        for(int j=0;j<num;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
            b[i]=count;
        }
    }
    int index=0;
    int max=b[0];
    for(int i=0;i<num;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}
