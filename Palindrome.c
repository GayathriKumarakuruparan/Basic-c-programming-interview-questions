#include <stdio.h>
int fib(int first,int second)
{
    int res;
    res=first+second;
    return res;
}
int main()
{
    int num,res=0,rem;
    scanf("%d",&num);
    int temp=num;
    while(num!=0)
    {
        rem=num%10;
        res=(res*10)+rem;
        num/=10;
    }
    if(temp==res)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
