#include <stdio.h>
int square(int num)
{
    return num*num;
}
int main()
{
    int num;
    printf("Enter a value :  ");
    scanf("%d",&num);
    int val=square(num);
    printf("%d",val);
}
