#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],c;
    int i,count=0;
    
    gets(str);
    scanf("%c",&c);
    
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='0'&&str[i]<='9' || str[i]==' ')
        {
            if(str[i]==c) count++;
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            if(str[i]==c || str[i]+32==c) count++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            if(str[i]==c || str[i]-32==c) count++;
        }
    }
    
    printf("%d",count);
    return 0;
}