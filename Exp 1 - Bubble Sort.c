#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  // Sample array
    int n = 7;  // Number of elements
    int i, j, temp;

    // Bubble Sort: Repeatedly swap adjacent elements if they are in the wrong order
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            // Compare and swap if elements are in the wrong order
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
