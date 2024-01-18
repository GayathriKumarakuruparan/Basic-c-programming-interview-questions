#include <stdio.h>
int power(int num,int i)
{
    int res=1;
    while(i!=0)
    {
        res=res*num;
        --i;
    }
    return res;
}
int main()
{
    int num,res,val,rem=0,i=0;
    scanf("%d",&num);
    int num1=num;
    int temp=num;
    val=num%10;
    while(num!=0)
    {
        num/=10;
        i++;
    }
    while(num1!=0)
    {
        res=num1%10;
        rem=rem+(power(res,i));
        num1=num1/10;
    }

    if(rem==temp)
    {
        printf("It is armstrong");
    }
    else
    {
        printf("not");
    }
}
