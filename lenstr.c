#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int c=0;
    printf("Enter string:\n");
    fgets(s,sizeof(s),stdin);
    while(s[c]!='\0'&&s[c]!='\n'){
        c++;
    }
    printf("The length of string is:%d",c);
    return 0;
}