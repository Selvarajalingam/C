#include<stdio.h>
#include<string.h>
int main()
{
    int i,length=0;
    char str[50];
    printf("Enter the string :");
    scanf("%s",&str);
    int a=strlen(str);
    for(i=a-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            break;
        }
        else
        {
            length++;
        }

    }
    printf("length of last word: %d\n",length);
    return 0;
}
