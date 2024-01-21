#include <stdio.h>

int main()
{
    int num,arr[100],i=0;
    scanf("%d",&num);
    while(num!=0)
    {
        int res=num%8;
        arr[i++]=res;
        num/=8;
        
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}
