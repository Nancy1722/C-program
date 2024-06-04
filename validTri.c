#include <stdio.h>

int main() {
    double s1, s2, s3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%lf", &s1);
    printf("Side 2: ");
    scanf("%lf", &s2);
    printf("Side 3: ");
    scanf("%lf", &s3);

    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
