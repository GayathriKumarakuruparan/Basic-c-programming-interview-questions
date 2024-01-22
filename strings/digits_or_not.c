#include <stdio.h>
#include<string.h>
int digit_or_not(char *ch)
{
    if ((*ch >= 'a' && *ch <= 'z') || (*ch >= 'A' &&*ch <= 'Z'))
    return 1;
    else
    return 0;
}
int main()
{
    char ch;
    printf("enter the char:\n");
    scanf(" %c",&ch);
    int res=digit_or_not(&ch);
    if(res==0)
    printf("This character is digit");
    else if(res==1)
    printf("This character is not a digit");
    return 0;
}
