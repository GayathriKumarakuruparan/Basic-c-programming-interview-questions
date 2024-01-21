#include <stdio.h>
int fact(int n)
{
    
    if(n>0)
    {
        int fa=fact(n-1);
        return n*fa;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    int val=fact(num);
    printf("%d",val);
    return 0;
}
