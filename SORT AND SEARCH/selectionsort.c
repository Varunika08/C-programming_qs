#include <stdio.h>
//sort array of elements using selection sort method.
//time complexity = O(n^2)

int main(){
    int arr[6]={8,4,9,2,7,5};
    int n=6;

    for (int i=0;i<n-1;i++){
        int minindex=i;            //consider 1st element is smallest.
        for (int j=i+1;j<n;j++){
            if (arr[j] < arr[minindex]){
                minindex=j;         // j is the index having smallest element.
            }
        }

        int first=arr[minindex];   // swap assumed small number and actual small number
        arr[minindex]=arr[i];
        arr[i]=first;
    }

    printf("sorted array is : \n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}