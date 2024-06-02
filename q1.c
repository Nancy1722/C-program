#include <stdio.h>
#include <limits.h>

#define MAX 1000

void find_least_frequent(int arr[], int n) {
    int count[MAX] = {0};
    int min_count = INT_MAX;
    int result = INT_MAX;

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (count[arr[i]] < min_count || 
            (count[arr[i]] == min_count && arr[i] < result)) {
            min_count = count[arr[i]];
            result = arr[i];
        }
    }

    printf("The least frequent integer is: %d\n", result);
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of integers must be positive.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the integers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] <= 0 || arr[i] >= MAX) {
            printf("Please enter positive integers less than %d.\n", MAX);
            return 1;
        }
    }

    find_least_frequent(arr, n);

    return 0;
}
