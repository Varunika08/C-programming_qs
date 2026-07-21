#include <stdio.h>
//to find a target character in a string.

int main(){
    char str[10]="computer";
    char target;
    printf("enter target character:");
    scanf(" %c",&target);
    int found=0;

    for (int i=0;str[i]!='\0';i++){
        if (str[i]==target){
            printf("the character %c is found at index %d\n", target, i);
            found=1;
            break;
        }
    }

    if (found==0){
        printf("character not found !\n\n");
    }
}