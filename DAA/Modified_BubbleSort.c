#include <stdio.h>

void modifiedBubbleSort(int arr[], int n)
{
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++)
    {
        swapped = 0; // Reset flag for each pass

        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; // Mark that a swap occurred
            }
        }

        // If no swaps happened, array is already sorted
        if (swapped == 0)
        {
            break;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    modifiedBubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}