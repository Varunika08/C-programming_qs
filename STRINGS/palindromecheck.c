#include <stdio.h>
#include <string.h>
//to check if a string is palindrome or not.

int main(){
    char str[20];
    printf("enter a string:");
    scanf("%s",str);
    int length=strlen(str);

    char rev[20];
    int j=0;

    for (int i=length-1; i>=0 ;i--){
        rev[j]=str[i];             //store characters backwards in rev.
        j++;
    }

    rev[j] = '\0';                 //null terminator
    if (strcmp(rev,str)==0){
        printf("string is palindrome!");
    }else{
        printf("string is not palindrome !");
    }
}