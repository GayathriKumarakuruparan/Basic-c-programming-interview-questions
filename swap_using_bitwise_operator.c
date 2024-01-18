#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a is %d\nb is %d",a,b);
}
