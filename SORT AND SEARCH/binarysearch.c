#include <stdio.h>
//to find a target element in an array using binary search method.
//array must be sorted.

//time complexity is O(logn)

int main(){
    int arr[6]={2,3,5,7,8,9};
    int n=6;

    int target;
    printf("enter target number:");
    scanf("%d",&target);

    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]==target){
            printf("Target value %d found at index %d\n",target,mid);
            break;
        }
    }
}