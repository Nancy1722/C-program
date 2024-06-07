#include <stdio.h>

void printNaturalNumbers(int n) {
    // Base case
    if (n < 1) {
        return;
    }
    //print numbers up to n-1
    printNaturalNumbers(n - 1);
    printf("%d ", n);
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are: ", n);
    printNaturalNumbers(n);
    printf("\n");

    return 0;
}
