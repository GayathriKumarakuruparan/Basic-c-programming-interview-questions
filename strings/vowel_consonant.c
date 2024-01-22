#include <stdio.h>
#include<string.h>
int vowel_consonant(char *ch)
{
    if ((*ch >= 'a' && *ch <= 'z') || (*ch >= 'A' &&*ch <= 'Z'))
    {
    if(((*ch=='a')||(*ch=='A'))||((*ch=='e')||(*ch=='E'))||((*ch=='i')||(*ch=='I'))||((*ch=='o')||(*ch=='O'))||((*ch=='u')||(*ch=='U')))
    return 0;
    else
    return 1;
    }
    else
    printf("Not an character.");
    return -1;
}
int main()
{
    char ch;
    printf("enter the char is vowel or constant:\n");
    scanf(" %c",&ch);
    int res=vowel_consonant(&ch);
    if(res==0)
    printf("This character is vowel");
    else if(res==1)
    printf("This character is consonant");
    return 0;
}
