#include <stdio.h>
//to sort elements of an array using insertion sort method.
//time complexity = O(n^2)

int main(){
    int arr[6]={8,4,9,2,7,5};
    int n=6;

    for (int i=1;i<n;i++){
        int first=arr[i];      //pulling one card out of a deck of cards. (to compare with others)
        int j=i-1;             //checking the card on the left of the pulled card.

        while (j >= 0 && arr[j] > first) { //if card is greater than first card and the one I have is greater than pulled card
            arr[j + 1] = arr[j];         //swap the 2 numbers.
            j = j - 1;                   //chk next number (moving backwards)
        }
        arr[j + 1] = first; // insert smaller number in the old place
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}