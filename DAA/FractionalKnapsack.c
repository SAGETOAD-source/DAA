#include <stdio.h>

// Structure for items
struct Item
{
    int weight;
    int value;
    float ratio; // value/weight
};

// Function to sort items by ratio (descending)
void sortItems(struct Item arr[], int n)
{
    struct Item temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].ratio < arr[j + 1].ratio)
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
    int n, capacity;

    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    // Input values and weights
    for (int i = 0; i < n; i++)
    {
        printf("Enter value and weight of item %d: ", i + 1);
        scanf("%d %d", &items[i].value, &items[i].weight);
        items[i].ratio = (float)items[i].value / items[i].weight;
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    // Sort items by value/weight ratio
    sortItems(items, n);

    float totalValue = 0.0;

    // Greedy selection
    for (int i = 0; i < n; i++)
    {
        if (capacity >= items[i].weight)
        {
            // Take whole item
            capacity -= items[i].weight;
            totalValue += items[i].value;
        }
        else
        {
            // Take fraction of item
            totalValue += items[i].ratio * capacity;
            break;
        }
    }

    printf("Maximum value = %.2f\n", totalValue);

    return 0;
}