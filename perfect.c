#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int temp=n;
    for(int i=1;i<n;i++)
    {
        if((n%i)==0)
        {
            sum=sum+i;
        }
    }
    if(sum==temp)
    {
        printf("perfect number");
    }
    else
    {
        printf("not a perfect number");
    }
    
}
