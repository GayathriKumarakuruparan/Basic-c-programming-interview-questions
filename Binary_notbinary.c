#include <stdio.h>

int main()
{
    int num,i=0,count=0;
    printf("enter the number:\n");
    scanf("%d",&num);
    int num1=num;
    int temp=num;
    while(num!=0)
    {
        num/=10;
        i++;
    }
    while(num1!=0)
    {
        int rem=num1%10;
        if((rem==0)||(rem==1))
        {
            count++;
        }
        num1/=10;
    }
    if(count==i)
    {
        printf("BINARY NUMBER");
    }
    else
    {
        printf("NOT A BINARY NUMBER");
    }
}
