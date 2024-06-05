#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    
    if (number < 0) {
        printf("Factorial of a negative number is undefined.\n");
    } else {

        printf("Factorial of %d is %llu\n", number, factorial(number));
    }
    return 0;
}
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
