#include <stdio.h>
//to find a target value in an array using LINEAR SEARCH method.

int main(){
    int arr[5]={3,8,5,9,7};
    int n=5;
    int target;
    printf("enter target element to find : ");
    scanf("%d",&target);
    int found=0;

    for(int i=0;i<n;i++){
        if (arr[i]==target){
            printf("element %d is found at index %d\n", target, i);
            found=1;
            break;
        }
    }

    if (found==0){
        printf("element not found !");
    }
}