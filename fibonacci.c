#include <stdio.h>

void printFibonacci(int n) {
      int a = 0, b = 1, nextTerm;

    for (int i = 1; i <= n; ++i) {
             printf("%d ", a);
        
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
