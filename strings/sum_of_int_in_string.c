#include <stdio.h>
#include<string.h>
int sum=0;
int *sum_of_int_in_string(char *str)
{
    
    for(int i=0;i<strlen(str);i++)
    {
        if((str[i]>='0')&&(str[i]<='9'))
        {
            sum+=(str[i]-'0');
        }
    }
    return &sum;
}
int main()
{
    char str[100],str2[100];
    printf("Enter the string:\n");
    scanf(" %[^\n]",str);
    int *res=sum_of_int_in_string(str);
    printf("the sum of int in string is: \n%d",*res);
}
