#include <stdio.h>
#include <string.h>
int ANAGRAM(char *str1,char *str2)
{
    int count=0;
    for(int i=0;i<strlen(str1);i++)
    {
        for(int j=0;j<strlen(str2);j++)
        {
            if(str1[i]==str2[j])
            {
                count++;
                break;
            }
        }
    }
    if(count==strlen(str1))
    return 0;
    else
    return 1;
}
int main()
{
    char str[100],str1[100];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    printf("Enter the string2:\n");
    scanf(" %[^\n]",str1);
    int res=ANAGRAM(str,str1);
    if(res==0)
    printf("ANAGRAM");
    else
    printf("not an ANAGRAM");
    
}
