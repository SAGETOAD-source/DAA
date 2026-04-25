#include <stdio.h>

// Structure for activities
struct Activity
{
    int start;
    int finish;
};

// Function to sort activities by finish time
void sortActivities(struct Activity arr[], int n)
{
    struct Activity temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].finish > arr[j + 1].finish)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter number of activities: ");
    scanf("%d", &n);

    struct Activity arr[n];

    // Input activities
    for (int i = 0; i < n; i++)
    {
        printf("Enter start and finish time of activity %d: ", i + 1);
        scanf("%d %d", &arr[i].start, &arr[i].finish);
    }

    // Sort by finish time
    sortActivities(arr, n);

    printf("Selected activities:\n");

    // First activity is always selected
    int i = 0;
    printf("(%d, %d)\n", arr[i].start, arr[i].finish);

    // Select remaining activities
    for (int j = 1; j < n; j++)
    {
        if (arr[j].start >= arr[i].finish)
        {
            printf("(%d, %d)\n", arr[j].start, arr[j].finish);
            i = j;
        }
    }

    return 0;
}