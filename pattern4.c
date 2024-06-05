#include <stdio.h>

void printPattern(int n);

int main() {
    int n = 4; 
    printPattern(n);
    return 0;
}

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }  
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
}
