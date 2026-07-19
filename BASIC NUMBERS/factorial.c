#include <stdio.h>
//to find factorial of given number.

int fact(int n);

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("factorial of the number %d is %d\n",n,fact(n));
}

int fact(int n){
    if (n==1){
        return 1;
    }
    int f=1;
    f=fact(n-1)*n;
    return f;
}