#include <stdio.h>
#include<string.h>
int palindrome(char *str,int size)
{
    int j=size-1;
    for(int i = 0; j > i;i++)
    {
        if(str[j--]!=str[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char str[100];
    printf("enter the word:\n");
    scanf("%[^\n]",str);
    int res=palindrome(str,strlen(str));
    if(res==0)
    printf("strings are palindrome");
    else
    printf("strings are not palindrome");
    return 0;
}
