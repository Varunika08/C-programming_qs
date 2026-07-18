#include <stdio.h>
// to find the second largest element in an array.

int main(){
    int arr[5];
    int n = 5;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int seclargest=arr[0];

    for (int i=0;i<n;i++){
        if (arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }else{
            if (arr[i]<largest){
                if(arr[i]>seclargest){
                    seclargest=arr[i];
                }
            }
        }
    }
    if (seclargest!=largest) {
        printf("The second largest element is: %d\n", seclargest);
    } else {
        printf("There is no second largest element\n");
    }
}