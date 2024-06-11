#include <stdio.h>

int main() {
    int arr[10];
    int temp;

    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order using bubble sort
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
