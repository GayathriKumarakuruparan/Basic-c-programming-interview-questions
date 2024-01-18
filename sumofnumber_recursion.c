#include <stdio.h>
int sum(int num)
{
    if(num<=0)
    {
        return 0;
    }
    else
    {
        int res=sum(num-1);
        return num+res;
    }
}

int main()
{
    int num,i=0,rem;
    printf("enter the number:\n");
    scanf("%d",&num);
    int res=sum(num);
    printf("the sum of the digits is %d",res);
}
