#include <stdio.h>
void sum_product(int *n1, int *n2,int *sum,int *product)
{
  *sum=*n1 + *n2;
  *product=*n1 * *n2;
}
int main()
{
int num1,num2,sum,product;
scanf("%d %d",&num1,&num2);
sum_product(&num1,&num2,&sum,&product);
printf("sum: %d\nproduct: %d",sum,product);
}
