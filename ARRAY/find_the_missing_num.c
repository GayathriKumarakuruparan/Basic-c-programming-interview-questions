#include <stdio.h>
int main()
{
    int size,sum=0,missing;
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size-1];
    printf("Enter the numbers:\n");
    for(int i=0;i<size-1;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    missing = ((size * (size + 1))/2) - sum;
    printf("The missing number is %d",missing);
    return 0;
}
