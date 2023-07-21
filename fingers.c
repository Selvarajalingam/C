#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n%8;
    if(x==1)
        printf("thumb\n");
    if(x==2||x==0)
        printf("index\n");
    if(x==3||x==7)
        printf("middle\n");
    if(x==4||x==6)
        printf("ring\n");
    if(x==5)
        printf("little\n");
        return 0;

}
