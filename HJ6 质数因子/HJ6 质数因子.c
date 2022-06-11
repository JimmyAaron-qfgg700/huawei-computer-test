#include<stdio.h>
#include<math.h>

int PrimeNumber(int num)
{
    int i,x;
    x=(int)sqrt((double)num);
    
    for(i=2;i<=x;i++)
    {
        if(num%i==0) return 0;
    }
    return 1;
}

int main()
{
    int i,num;
    
    scanf("%d",&num);
    
    while(PrimeNumber(num)==0)
    {
        for(i=2;i<=num;i++)
        {
            if(PrimeNumber(i)==1 && num%i==0)
            {
                printf("%d ",i);
                break;
            }
        }
        num/=i;
    }
    printf("%d",num);

    return 0;
}