#include <stdio.h>

// Function to find maximum of two numbers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int n, W;

    printf("Enter number of items: ");
    scanf("%d", &n);

    int wt[n], val[n];

    // Input weights and values
    for (int i = 0; i < n; i++)
    {
        printf("Enter weight and value of item %d: ", i + 1);
        scanf("%d %d", &wt[i], &val[i]);
    }

    printf("Enter capacity of knapsack: ");
    scanf("%d", &W);

    // DP table
    int dp[n + 1][W + 1];

    // Build table
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {

            if (i == 0 || w == 0)
            {
                dp[i][w] = 0; // base case
            }
            else if (wt[i - 1] <= w)
            {
                dp[i][w] = max(
                    val[i - 1] + dp[i - 1][w - wt[i - 1]], // include item
                    dp[i - 1][w]                           // exclude item
                );
            }
            else
            {
                dp[i][w] = dp[i - 1][w]; // can't include
            }
        }
    }

    printf("Maximum value = %d\n", dp[n][W]);

    return 0;
}