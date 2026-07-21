#include <stdio.h>
//to count frequency of each character in a string.

int main(){
    char str[] ="hello";
    
    int max = 0;
    char max_char = '\0';

    for (int i=0;str[i]!='\0';i++){
        int counted=0;
        for (int j=0;j<i;j++){
            if (str[i]==str[j]){    //check for repetitions
                counted=1;          //if repeated then counted=1 (true)
            }
        }
    
        if (counted==0){   //if first time or there's no repetitions
            int count=0;
            for(int j=0;str[j]!='\0';j++){
                if (str[i]==str[j]){    // if repetitions are there then count++
                    count++;
                }
            } 

            if (count > max) {
                max = count;
                max_char = str[i];
            }
        printf("character %c occurs %d times\n",str[i],count);
        }
    }
    printf("highest occuring character is %c\n",max_char);
}