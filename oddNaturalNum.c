#include <stdio.h>

void printOddNumbersReverse(int n) {
    // Base case
    if (n < 1) {
        return;
    }
    // Calculate the odd number
    int oddNumber = 2 * n - 1;

    printf("%d ", oddNumber);
    printOddNumbersReverse(n - 1);
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d odd natural numbers in reverse order are: ", n);
    printOddNumbersReverse(n);
    printf("\n");

    return 0;
}
