#include <stdio.h>

void printPyramid(int n) {
    int i, j, k;
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPyramid(n);
    return 0;
}
