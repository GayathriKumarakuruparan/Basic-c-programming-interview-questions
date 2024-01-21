#include <stdio.h>
#define LARGEST(a,b,c) (a>b?(a>c? a:c):(b>c? b:c))
int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int large=LARGEST(n1,n2,n3);
    printf("%d",large);
    return 0;
}
