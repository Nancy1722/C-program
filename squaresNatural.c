//Write a recursive function in C to print squares of first N natural numbers.
#include <stdio.h>
void printSquares(int n);

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    printSquares(N);
    return 0;
}
void printSquares(int n) {
    if (n <= 0) {
        return; 
    }
    printSquares(n - 1);
     
    printf("%d ", n * n);
}
