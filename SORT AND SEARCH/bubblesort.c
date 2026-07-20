#include <stdio.h>
//sort array of elements using bubble sort method.
//time complexity = O(n^2)

int main(){
    int arr[6]={8,4,9,2,7,5};
    int n=6;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int first=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=first;
            }
        }
    }
    printf("the sorted array is \n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}