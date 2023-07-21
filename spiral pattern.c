#include<stdio.h>
int main()
{
    int n,i,j,rowmin,rowmax,colmin,colmax,count=1;
    scanf("%d",&n);
    rowmin=1;
    rowmax=n;
    colmin=1;
    colmax=n;
    int a[n][n];
    while(rowmin<=rowmax && colmin<=colmax)
    {
        for(i=colmin;i<=colmax;i++)
        {
            a[rowmin][i]=count++;
        }
        for(i=rowmin+1;i<=rowmax;i++)
        {
            a[i][colmax]=count++;
        }
        for(i=colmax-1;i>=colmin;i--)
        {
            a[rowmax][i]=count++;
        }
        for(i=rowmax-1;i>=rowmin+1;i--)
        {
            a[i][colmin]=count++;
        }
        rowmin++;rowmax--;colmin++;colmax--;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");

    }

}
