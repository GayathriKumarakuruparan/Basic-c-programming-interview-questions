#include <stdio.h>
int main()
{
    int num;
    int mask=1,shift;
    printf("Enter a value :  ");
    scanf("%d",&num);
    for(int i=31;i>=0;i--){
        shift=mask<<i;
        int res=num&shift;
        if(res==0)
        printf("0");
        else
        printf("1");
        
    }
    
}
