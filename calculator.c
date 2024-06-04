#include <stdio.h>

void add();
void subtract();
void multiply();
void divide();
void modulo();

int main() {
    int choice;

    while(1) {
    
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulo\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                modulo();
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void add() {
    double a, b;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a + b);
}

void subtract() {
    double a, b;
    printf("Enter two numbers to subtract (a - b): ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a - b);
}

void multiply() {
    double a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a * b);
}

void divide() {
    double a, b;
    printf("Enter two numbers to divide (a / b): ");
    scanf("%lf %lf", &a, &b);
    if(b != 0)
        printf("Result: %.2lf\n", a / b);
    else
        printf("Error: Division by zero is not allowed.\n");
}

void modulo() {
    int a, b;
    printf("Enter two numbers to find the remainder (a %% b): ");
    scanf("%d %d", &a, &b);
    if(b != 0)
        printf("Result: %d\n", a % b);
    else
        printf("Error: Division by zero is not allowed.\n");
}
