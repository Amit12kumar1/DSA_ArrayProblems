#include <stdio.h>
int n=3;
void inputDArray(int arr[][n], int n1, int n2) {
    printf("Enter elements:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
void outputDArray(int arr[][n], int n1, int n2) {
    printf("2D Array print element:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n1, n2;
    printf("Enter the number for the 2D array: ");
    scanf("%d %d", &n1, &n2);
    int arr[n1][n2];
    inputDArray(arr, n1, n2);
    outputDArray(arr, n1, n2);
    return 0;
}