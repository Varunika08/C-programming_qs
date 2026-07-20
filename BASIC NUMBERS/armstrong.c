#include <stdio.h>
//to check if given number is armstrong or not.

#include <math.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int temp,rem;
    int dig=0;
    int res=0;

    temp=n;
    while(temp>0){
        dig++;
        rem=temp%10;       
        temp/=10;
    }

    temp=n;
    while (temp>0){
        rem=temp%10;
        res+=round(pow(rem,dig));
        temp/=10;
    }

    if (n==res){
        printf("armstrong number !\n");
    }else{
        printf("not armstrong number !");
    }
}