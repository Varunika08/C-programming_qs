#include <stdio.h>
//find if n is a prime number or not.

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    if (n<=1){
        printf("number is not prime\n");
    }else{
        int i;
        for (i=2;i<=n/2;i++){
            if (n%i==0){
                break;
            }
        }
    
        if (i>n/2){
            printf("prime number!");
        }else{
            printf("not prime");
        }
    }
}