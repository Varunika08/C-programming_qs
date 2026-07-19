#include <stdio.h>
//to find fibonacci series of given integer limit.

int fibonacci(int n);

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("fibonacci series is :\n");
    for (int i=0;i<=n;i++){
        printf("%d  ",fibonacci(i));
    }
    return 0;
}

int fibonacci(int n){
    if (n==1){
        return 1;
    }
    if (n<=0){
        return 0;
    }
    if (n>1){
        int fib=fibonacci(n-1)+fibonacci(n-2);
        return fib;
    }
}