#include <stdio.h>
//to count frequency of each element in an array and print element with maximum frequency.

int main(){
    int arr[] = {4, 8, 3, 4, 8, 1, 2, 8};
    int n = 8;
    
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i=0;i<n;i++){
        int counted=0;
        for (int j=0;j<i;j++){
            if (arr[i]==arr[j]){    //check for repetitions
                counted=1;          //if repeated then counted=1 (true)
            }
        }
    
        if (counted==0){   //if first time or there's no repetitions then 
            int count=0;
            for(int j=0;j<n;j++){
                if (arr[i]==arr[j]){    // if repetitions are there then count++
                    count++;
                }
            } 
            printf("element %d occurs %d times\n",arr[i],count);
        }
    }
    printf("max value is %d\n",max);
}