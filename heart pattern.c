#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c,b;

        scanf("%d %d",&c,&b);


        if(c>b && b==0)
        {
            printf("NO");
        }
        else if(b%2==0)
        {
            printf("NO");
        }
        else if(c==b)
        {
            printf("YES");
        }
        else if(b%2!=0)
        {
            printf("YES");
        }

    }
}
