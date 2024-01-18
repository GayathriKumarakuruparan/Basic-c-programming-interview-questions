#include <stdio.h>
//to get the power of each number
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
    //loop to get the number of digits
    while(num!=0)
    {
        num/=10;
        i++;
    }
    //loop to find the armstrong number(eg:153 = 1*1*1 + 5*5*5 + 3*3*3 = 153)
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
