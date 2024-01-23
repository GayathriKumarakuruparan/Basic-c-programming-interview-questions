#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int alpha=0,digit=0,special_char=0;
    printf("Enter the string:\n");
    scanf(" %[^\n]",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(((str[i]>='a')||(str[i]>='A'))&&((str[i]<='z')||(str[i]<='Z'))&&(str[i]!=' '))
        alpha++;
        else if((str[i]>='0')&&(str[i]<='9'))
        digit++;
        else
        special_char++;
    }
    printf("In this strings %s\nThe number of characters: %d\nThe number of digits: %d\nThe numberof special_char: %d",str,alpha,digit,special_char);
}
