#include <stdio.h>

int main() {
    int n, hcf, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    hcf = arr[0];
    for (i = 1; i < n; i++) {
        j = arr[i];
        while (j != 0) {
          int temp=j;
            j = hcf%j;
        hcf=temp;
          
        }
    }

    printf("HCF of the elements in the array is: %d\n", hcf);

    return 0;
}