#include <stdio.h>
//to find largest element in an array.

int main(){
    int arr[10];
    int n = 10;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int largest=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The largest element in the array is :%d ",largest);
}