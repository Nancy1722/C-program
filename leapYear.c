#include <stdio.h>

int main() {
    int year;
    int isLeapYear = 0; 

    printf("Enter a year: ");
    scanf("%d", &year);

    switch (year % 4 == 0) {
        case 0:
            isLeapYear = 0;
            break;
        case 1:
            switch (year % 100 == 0) {
                case 0:
                    isLeapYear = 1;
                    break;
                case 1:
                    switch (year % 400 == 0) {
                        case 0:
                            isLeapYear = 0;
                            break;
                        case 1:
                            isLeapYear = 1;
                            break;
                    }
                    break;
            }
            break;
    }

 
    switch (isLeapYear) {
        case 0:
            printf("%d is not a leap year.\n", year);
            break;
        case 1:
            printf("%d is a leap year.\n", year);
            break;
    }

    return 0;
}
