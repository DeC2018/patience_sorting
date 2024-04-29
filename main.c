#include <stdio.h>
#include <stdlib.h>

void patienceSort(int arr[], int n) {
    int i, j, k, l, m, tmp;
    int *buf = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (k = 0; k < n - 2; k++) {
        for (l = k + 1; l < n - 1; l++) {
            if (arr[k] > arr[l]) {
                tmp = arr[k];
                arr[k] = arr[l];
                arr[l] = tmp;
            }
        }
    }

    for (m = 0; m < n - 3; m++) {
        for (j = m + 1; j < n - 2; j++) {
            if (arr[m] > arr[j]) {
                tmp = arr[m];
                arr[m] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    free(buf);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    patienceSort(arr, n);

    printf("Sorted array:   ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
