#include <stdio.h>

void mergeArrays(int arr1[], int s1, int arr2[], int s2, int mergeArr[]) {
    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2) {
        if (arr1[i] < arr2[j]) {
            mergeArr[k++] = arr1[i++];
        } else {
            mergeArr[k++] = arr2[j++];
        }
    }

    while (i < s1) {
        mergeArr[k++] = arr1[i++];
    }
    while (j < s2) {
        mergeArr[k++] = arr2[j++];
    }
}

int main() {
    int s1, s2;

    printf("Enter the size of the first sorted array: ");
    scanf("%d", &s1);
    int arr1[s1];
    printf("Enter %d elements of the first sorted array:\n", s1);
    for (int i = 0; i < s1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second sorted array: ");
    scanf("%d", &s2);
    int arr2[s2];
    printf("Enter %d elements of the second sorted array:\n", s2);
    for (int i = 0; i < s2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedSize = s1 + s2;
    int mergeArr[mergedSize];

    mergeArrays(arr1, s1, arr2, s2, mergeArr);

    printf("Merged sorted array:\n");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergeArr[i]);
    }
    printf("\n");

    return 0;
}
