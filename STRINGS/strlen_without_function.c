#include <stdio.h>
//to print length of string without built in function

int main(){
    char str[100];
    printf("enter a string:");
    scanf("%[^\n]",str);

    int character=0;
    for (int i=0;str[i]!='\0';i++){
        character++;
    }

    printf("The length of the string is: %d\n", character);
}