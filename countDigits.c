//Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>

int countDigits(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    printf("Number of digits in %d is %d\n", num, countDigits(num));
    return 0;
}

int countDigits(int n) {
    if (n == 0) {
        return 0; 
    }
    return 1 + countDigits(n / 10); 
}
