#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    float avg;

    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    avg = sum / 10.0;

    printf("The average of numbers: %.2f\n", avg);

    return 0;
}
