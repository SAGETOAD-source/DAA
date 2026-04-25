#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // avoids overflow

        if (arr[mid] == key)
            return mid; // element found

        else if (arr[mid] < key)
            low = mid + 1; // search right half

        else
            high = mid - 1; // search left half
    }

    return -1; // not found
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50}; // must be sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}