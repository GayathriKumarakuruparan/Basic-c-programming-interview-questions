#include <stdio.h>
int main()
{
    int num,prime;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        prime=0;
        for(int j=2;j<i;j++)
        {
            if((i%j)==0)
            {
                prime++;
            }
        }
        if(prime==0)
        {
            printf("%d\n",i);
        }
    }
}
