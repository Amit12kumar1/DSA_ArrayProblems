#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
     int numbers[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
    }
    //Average of odd number.
    int sum = 0, count = 0;
    for (int i = 0; i < n; ++i) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
            count++;
        }
    }
    if (count > 0) {
        float average =sum / count;
        printf("Avg of odd elements: %f\n", average);
    } 

    return 0;
}