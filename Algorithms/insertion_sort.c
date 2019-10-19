#include <stdio.h>
#include <malloc.h>

void insertionSort(int n, int arr[])
{
    int newElement, location;

    for (int i = 1; i < n; i++)
    {
        newElement = arr[i];
        location = i - 1;

        while (location >= 0 && arr[location] > newElement)
        {
            arr[location + 1] = arr[location];
            location = location - 1;
        }

        arr[location + 1] = newElement;
    }
}

int main(void)
{
    int N;
    printf("Input N: ");
    scanf("%d", &N);

    int *arr;
    arr = (int *)malloc(N * sizeof(int));

    printf("Input the array of elements:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertionSort(N, arr);

    printf("Sorted array:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}
