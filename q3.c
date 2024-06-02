#include <stdio.h>

int main() {
    int a, b, c;
    int second_largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        second_largest = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        second_largest = b;
    } else {
        second_largest = c;
    }
    printf("The second largest number is: %d\n", second_largest);

    return 0;
}
