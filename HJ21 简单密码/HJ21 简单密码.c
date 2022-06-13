#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;
    
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='b'||str[i]=='c') str[i]='2';
        else if(str[i]=='d'||str[i]=='e'||str[i]=='f') str[i]='3';
        else if(str[i]=='g'||str[i]=='h'||str[i]=='i') str[i]='4';
        else if(str[i]=='j'||str[i]=='k'||str[i]=='l') str[i]='5';
        else if(str[i]=='m'||str[i]=='n'||str[i]=='o') str[i]='6';
        else if(str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s') str[i]='7';
        else if(str[i]=='t'||str[i]=='u'||str[i]=='v') str[i]='8';
        else if(str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z') str[i]='9';
        else if(str[i]>='A'&&str[i]<'Z') str[i]=str[i]-'A'+'a'+1;
        else if(str[i]=='Z') str[i]='a';
    }
    
    puts(str);
    return 0;
}