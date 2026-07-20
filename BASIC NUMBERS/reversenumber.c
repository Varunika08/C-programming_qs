#include <stdio.h>
//to reverse a given number

int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int rev=0;

    while (n>0){
        int rem=n%10;           //last digit of number
        rev=rev*10 + rem;       //last digit becomes first digit
        n/=10;
    }
    printf("the reversed number is : %d ",rev);
}