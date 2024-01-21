#include <stdio.h>
float celsius(float val)
{
    return ((val-32)*5)/9;
}
int main()
{
    float fahrenheit;
    scanf("%f",&fahrenheit);
    float val=celsius(fahrenheit);
    printf("%.2f",val);
}
