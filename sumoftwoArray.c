#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], sum[size];

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    printf("Sum of the arrays:\n");
    for (int i = 0; i < size; i++) {
        sum[i] = array1[i] + array2[i];
        printf("%d ", sum[i]);
    }

    return 0;
}