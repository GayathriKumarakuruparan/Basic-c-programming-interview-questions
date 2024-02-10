#include <stdio.h>

int main()
{
    int num,val;
    printf("enter the number:\n");
    scanf("%d",&num);
    unsigned int mask=1;
    for(int i=31;i>=0;i--)
    {
        val=num&(mask<<i);
        if(val==0)
        {
        printf("0");
        }
        else
        printf("1");
    }
}
