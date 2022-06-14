#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    while(gets(str))
    {
        int i,j,len;
        int captial=0,low=0,digital=0,sign=0;
        int flag=0;
    
        len=strlen(str);
    
        if(len<=8)
        {
            printf("NG\n");
        }
        else
        {
            for(i=0;i<len;i++)
            {
                if(str[i]>='A'&&str[i]<='Z') captial=1;
                else if(str[i]>='a'&&str[i]<='z') low=1;
                else if(str[i]>='0'&&str[i]<='9') digital=1;
                else sign=1;
            }
        
            if(captial+low+digital+sign<=2)
            {
                printf("NG\n");
            }
            else
            {
                for(i=0;i<len-2;i++)
                {
                    for(j=i+1;j<len-2;j++)
                    {
                        if(str[i]==str[j]&&str[i+1]==str[j+1]&&str[i+2]==str[j+2])
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1) break;
                }
                if(flag==1) printf("NG\n");
                else printf("OK\n");
            }
        }
    }
    
    return 0;
}