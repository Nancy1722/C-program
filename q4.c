#include <stdio.h>
#include <stdlib.h> 

int is_within_10_of_100_or_200(int num) {

    if (abs(num - 100) <= 10 || abs(num - 200) <= 10) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (is_within_10_of_100_or_200(num)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
