int GCD_HCF(int num1,int num2)
{
   if (num2 == 0)
        return num1;
    return GCD_HCF(num2, num1 % num2);
}
int main()
{
    int n1,n2;
    printf("Enter a values :  ");
    scanf("%d %d",&n1,&n2);
    int val=GCD_HCF(n1,n2);
    printf("%d",val);
}
