#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i=0,j,num,tmp;
    char str[30];
    
    scanf("%d",&num);
    
    if(num==0)
    {
        printf("%d",num);
        return 0;
    }
    
    while(num!=0)
    {
        tmp=num%10;
        str[i]=tmp+'0';
        i++;
        num/=10;
    }
    
    for(j=0;j<i;j++)
    {
        printf("%c",str[j]);
    }
    
    return 0;
}