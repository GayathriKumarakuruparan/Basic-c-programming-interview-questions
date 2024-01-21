
#include <stdio.h>
float simple_interest(float p,float t, float r)
{
    return (p*t*r)/100;
}
int main()
{
    float principal,time,rate_of_interest;
    printf("Enter principal, time and rate_of_interest : ");
    scanf("%f %f %f",&principal,&time,&rate_of_interest);
    float val=simple_interest(principal,time,rate_of_interest);
    printf("%f",val);
}
