#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len,add,cycle,count=0;
    
    gets(str);
    
    len=strlen(str);
    cycle=len/8;
    if(len%8==0) add=0;
    else add=8-len%8;
    
    for(i=0;i<cycle*8;i++)
    {
        printf("%c",str[i]);
        count++;
        
        if(count==8)
        {
            printf("\n");
            count=0;
        }
    }
    
    if(add!=0)
    {
        for(i=0;i<len%8;i++)
        {
            printf("%c",str[8*cycle+i]);
        }
        for(i=0;i<add;i++)
        {
            printf("0");
        }
    }
    
    return 0;
}