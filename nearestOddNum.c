#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    switch(num % 2) {
        case 0:
           
            num++;
            printf("The upper nearest odd number is: %d\n", num);
            break;
        case 1:
            printf("The number is already odd: %d\n", num);
            break;
        default:
            printf("wrong!\n");
    }

    return 0;
}
