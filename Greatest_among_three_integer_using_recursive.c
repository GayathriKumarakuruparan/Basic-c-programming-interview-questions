#include <stdio.h>
int greatest(int n1,int n2,int n3)
{
    if((n1>n2)&&(n1>n3))
    return n1;
    else if((n2>n1)&&(n2>n3))
    return n2;
    else
    return n3;
}
int main()
{
    int num1,num2,num3;
    printf("enter the numbers one by one");
    scanf("%d\n%d\n%d",&num1,&num2,&num3);
    int value=greatest(num1,num2,num3);
    printf("The greatest number is %d",value);
}
