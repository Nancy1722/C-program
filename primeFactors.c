#include <stdio.h>

void printPrimeFactors(int n);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 2) {
        printf("No prime factors for numbers less than 2.\n");
    } else {
        printf("Prime factors of %d are: ", number);
        printPrimeFactors(number);
        printf("\n");
    }

    return 0;
}
void printPrimeFactors(int n) {
 
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
       
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2) {
        printf("%d ", n);
    }
}
