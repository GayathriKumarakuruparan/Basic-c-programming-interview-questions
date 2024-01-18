#include <stdio.h>
int sumofdigits(int n)
{
    int rem;
    static int res=0;
    res=res+(n%10);
    rem=n/10;
    if(rem>0)
    sumofdigits(rem);
    return res;
}
int main(){
    int num,res;
    scanf("%d",&num);
    res=sumofdigits(num);
    printf("%d",res);
}
