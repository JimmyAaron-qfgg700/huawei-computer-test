#include<stdio.h>

int main()
{
    int n,num[1000];
    int i,j,tmp;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(num[j]>num[j+1])
            {
                tmp=num[j+1];
                num[j+1]=num[j];
                num[j]=tmp;
            }
        }
    }
    
    printf("%d\n",num[0]);
    for(i=1;i<n;i++)
    {
        if(num[i]!=num[i-1])
        {
            printf("%d\n",num[i]);
        }
    }
    
    return 0;
}