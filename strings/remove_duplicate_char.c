
#include <stdio.h>
#include<string.h>
char *remove_duplicate(char *str)
{
    for(int i=0;i<strlen(str);i++)
    {
         for(int j=i+1;j<strlen(str);j++)
         {
             if(str[i]==str[j])
             {
                 for(int k=j;str[k]!='\0';k++)
                 {
                     str[k]=str[k+1];
                 }
                 j--;
             }
         }
    }
    return str;
}
int main()
{
    char str[100],str2[100];
    printf("Enter the string:\n");
    scanf(" %[^\n]",str);
    char *res=remove_duplicate(str);
    printf("the concatenate string is: \n%s",res);
}
