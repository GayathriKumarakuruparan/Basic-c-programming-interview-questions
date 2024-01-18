#include <stdio.h>

int palindrome(int num)
{
    int res=0,rem;
    while(num!=0)
    {
        rem=num%10;
        res=(res*10)+rem;
        num/=10;
    }
    return res;
}
int main()
{
    int num,res=0,rem;
    scanf("%d",&num);
    int temp=num;
    res=palindrome(num);
    if(temp==res)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
