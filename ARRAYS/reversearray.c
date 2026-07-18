#include <stdio.h>
//to reverse the elements of an array.

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;

    printf("original array is :\n");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    } 
    printf("\n");

    for (int i=0;i<n/2;i++){         //reverse logic
        int first=arr[i];
        int second =arr[n-i-1];
        arr[i]=second;
        arr[n-i-1]=first;
    }

    printf("reversed array is :\n");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}