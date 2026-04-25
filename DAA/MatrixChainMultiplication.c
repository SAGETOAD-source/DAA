#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    printf("Enter number of matrices: ");
    scanf("%d", &n);

    int p[n + 1];

    // Input dimensions array
    printf("Enter dimensions array (size %d): ", n + 1);
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }

    int dp[n][n];

    // Cost is zero when multiplying one matrix
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 0;
    }

    // Chain length (L)
    for (int L = 2; L <= n; L++)
    {
        for (int i = 0; i < n - L + 1; i++)
        {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; k++)
            {
                int cost = dp[i][k] + dp[k + 1][j] + p[i] * p[k + 1] * p[j + 1];

                if (cost < dp[i][j])
                {
                    dp[i][j] = cost;
                }
            }
        }
    }

    printf("Minimum number of multiplications = %d\n", dp[0][n - 1]);

    return 0;
}