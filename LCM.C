#include <stdio.h>
int lcm(int n1,int n2)
{
    int first=n1;
    int second=n2;
    
    if(n1>n2)
    {
        int count=2;
        while(n1)
        {
            if((first%n2)==0)
            return first;
            else
            first=n1*(count++);
        }
    }
    else
    {
       int count=2;
        while(n2)
        {
            if((second%n1)==0)
            return second;
            else
            second=n2*(count++);
        }
    }
}
int main()
{
    int n1,n2;
    printf("Enter a values :  ");
    scanf("%d %d",&n1,&n2);
    int val=lcm(n1,n2);
    printf("%d",val);
}
