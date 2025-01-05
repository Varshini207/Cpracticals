#include<stdio.h>
int main(){
    char c,s[100];
    int i,co=0;
    printf("enter the string:");
    fgets(s,sizeof(s),stdin);
    printf("enter character:");
    scanf("%c",&c);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==c){
            ++co;
        }
    }
    printf("the frequency of the character %c is:%d",c,co);
    return 0;

}