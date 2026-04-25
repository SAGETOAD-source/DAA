#include <stdio.h>

// Function for Counting Sort
void countingSort(int arr[], int n)
{
    int i;

    // Find maximum element
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int count[max + 1];

    // Initialize count array
    for (i = 0; i <= max; i++)
        count[i] = 0;

    // Store frequency of each element
    for (i = 0; i < n; i++)
        count[arr[i]]++;

    // Reconstruct sorted array
    int index = 0;
    for (i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }
}

// Function to print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    countingSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}