#include <stdio.h>
//to count the vowels in a string.

int main(){
    char str[10]="computer";
    int count=0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    printf("vowel count is : %d",count);   
}