#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // outer loop
    {
        for (int j = 0; j < n - i - 1; j++) // inner loop
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);

                // Print array after every swap
                printf("Step: ");
                for (int k = 0; k < n; k++)
                    printf("%d ", arr[k]);
                printf("\n");
            }
        }
    }
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    bubble_sort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
