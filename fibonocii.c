#include <stdio.h>
int main()
{
    int num,res,first=0,second=1;
    scanf("%d",&num);
    
    for(int i=0;i<num;i++)
    {
        if(i<=1){
           res=i; 
        }
        else
        {
            res=first+second;
            first=second;
            second=res;
        }
        printf("%d ",res);
    }
}
