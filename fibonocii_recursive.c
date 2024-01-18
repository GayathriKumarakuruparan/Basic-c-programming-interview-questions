#include <stdio.h>
int fib(int first,int second)
{
    int res;
    res=first+second;
    return res;
}
int main()
{
    int num,res=0,first=0,second=1;
    scanf("%d",&num);
    
    for(int i=0;i<num;i++)
    {
        if(i<=1){
           res=i; 
        }
        else
        {
            res=fib(first,second);
        }
        printf("%d ",res);
        first=second;
        second=res;
    }
}
