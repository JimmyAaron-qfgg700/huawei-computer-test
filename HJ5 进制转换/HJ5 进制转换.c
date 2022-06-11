#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[5];
    int num[5];
    int i,j=0;
    int total=0;
    
    gets(str);
    for(i=strlen(str)-1;i>1;i--)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            num[j]=str[i]-'0';
            j++;
        }
        else if(str[i]>='A'&&str[i]<='F')
        {
            num[j]=str[i]-'A'+10;
            j++;
        }
    }
    
    for(i=0;i<j;i++)
    {
        total+=pow(16,i)*num[i];
    }
    printf("%d",total);
    return 0;
}