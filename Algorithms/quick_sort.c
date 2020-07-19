#include <stdio.h>

#define SIZE 10

int arr[SIZE];

void quick_sort(int first, int last) {
    int i, j, tmp, pivot;

    if (first < last) {
        pivot = first;
        i = first;
        j = last;

        while (i < j) {
            while (arr[i] <= arr[pivot] && i < last) {
                i++;
            }
            while (arr[j] > arr[pivot]) {
                j--;
            }
            if (i < j) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }

        tmp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = tmp;
        quick_sort(first, j - 1);
        quick_sort(j + 1, last);
    }
}

int main() {
    int i;

    printf("Enter %d integer elements for array\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Given array:\n[");
    for (i = 0; i < SIZE; i++) {
        if ((i + 1) != SIZE) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d]\n", arr[i]);
        }
    }

    quick_sort(0, SIZE - 1);

    printf("Sorted array:\n[");
    for (i = 0; i < SIZE; i++) {
        if ((i + 1) != SIZE) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d]\n", arr[i]);
        }
    }

    return 0;
}
