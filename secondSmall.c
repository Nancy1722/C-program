#include <stdio.h>
#include <limits.h>

void SecondSmallest(int arr[], int size) {
    if (size < 2) {
        printf("Array should have at least two elements.\n");
        return;
    }

    int first, second;
    first = second = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MAX) {
        printf("There is no second smallest element.\n");
    } else {
        printf("The second smallest element is %d.\n", second);
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    SecondSmallest(arr, size);

    return 0;
}
