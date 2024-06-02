#include <stdio.h>
#include <string.h>

void reverse_segment(char str[], int n1, int n2) {
    while (n1 < n2) {
        char temp = str[n1];
        str[n1] = str[n2];
        str[n2] = temp;
        n1++;
        n2--;
    }
}

int main() {
    char str[1000];
    int n1, n2;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    printf("Enter two integers n1 and n2: ");
    scanf("%d %d", &n1, &n2);

    int len = strlen(str);
    if (n1 < 0 || n2 >= len || n1 > n2) {
        printf("Invalid indices.\n");
        return 1;
    }

    reverse_segment(str, n1, n2);

    printf("Modified string: %s\n", str);

    return 0;
}
