#include <stdio.h>
float fahrenheit(float val)
{
    return ((val*9)/5)+32;
}
int main()
{
    float celsius;
    scanf("%f",&celsius);
    float val=fahrenheit(celsius);
    printf("%.2f",val);
}
