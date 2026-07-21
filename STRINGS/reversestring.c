#include <stdio.h>
#include <string.h>
//to print a string in the reverse order.

int main(){
    char str[20];
    printf("enter a string:");
    scanf("%s",str);
    int length=strlen(str);

    for (int i=length-1; i>=0 ;i--){
        printf("%c",str[i]);
    }
}