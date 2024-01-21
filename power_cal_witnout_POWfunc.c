#include <stdio.h>
int power(int num,int pow)
{
    int res=1;
    for(int i=0;i<pow;i++)
    {
        res*=num;
    }
    return res;
}
int main()
{
    int base,exp;
    printf("Enter a value of base:  ");
    scanf("%d",&base);
    printf("Enter a value of exponent: ");
    scanf("%d",&exp);
    int result=power(base,exp);
    printf("%d",result);
}
