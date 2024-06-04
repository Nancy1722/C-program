#include <stdio.h>

double simpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

int main() {
    double principal, rate, time, interest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);
    interest = simpleInterest(principal, rate, time);
    printf("The simple interest is: %.2lf\n", interest);

    return 0;
}
