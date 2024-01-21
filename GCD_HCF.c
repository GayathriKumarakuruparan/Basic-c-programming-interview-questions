#include <stdio.h>
int GCD_HCF(int num1,int num2)
{
    int gcd,i;
    for(i=1; i <= num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    return gcd;
}
int main()
{
    int n1,n2;
    printf("Enter a values :  ");
    scanf("%d %d",&n1,&n2);
    int val=GCD_HCF(n1,n2);
    printf("%d",val);
}
