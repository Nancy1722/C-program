#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
