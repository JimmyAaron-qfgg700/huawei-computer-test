#include<stdio.h>
#include<string.h>

int main()
{
    int i,count=0;
    char str[5000];
    gets(str);
    
    for(i=strlen(str)-1;i>=0;i--)
    {
        if(str[i]!=' ')
        {
            count++;
        }
        else
        {
            printf("%d",count);
            return 0;
        }
    }
    printf("%d",count);
    return 0;
}
