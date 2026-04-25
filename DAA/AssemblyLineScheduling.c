#include <stdio.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int n;

    printf("Enter number of stations: ");
    scanf("%d", &n);

    int a[2][n];    // processing times
    int t[2][n];    // transfer times
    int e[2], x[2]; // entry and exit times

    // Input processing times
    printf("Enter processing times for line 1:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[0][i]);

    printf("Enter processing times for line 2:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[1][i]);

    // Input transfer times
    printf("Enter transfer times from line 1 to 2:\n");
    for (int i = 1; i < n; i++)
        scanf("%d", &t[0][i]);

    printf("Enter transfer times from line 2 to 1:\n");
    for (int i = 1; i < n; i++)
        scanf("%d", &t[1][i]);

    // Entry and exit times
    printf("Enter entry times for line 1 and 2: ");
    scanf("%d %d", &e[0], &e[1]);

    printf("Enter exit times for line 1 and 2: ");
    scanf("%d %d", &x[0], &x[1]);

    int f1[n], f2[n];

    // Base case
    f1[0] = e[0] + a[0][0];
    f2[0] = e[1] + a[1][0];

    // Fill DP arrays
    for (int i = 1; i < n; i++)
    {
        f1[i] = min(f1[i - 1] + a[0][i],
                    f2[i - 1] + t[1][i] + a[0][i]);

        f2[i] = min(f2[i - 1] + a[1][i],
                    f1[i - 1] + t[0][i] + a[1][i]);
    }

    // Final answer
    int result = min(f1[n - 1] + x[0],
                     f2[n - 1] + x[1]);

    printf("Minimum time = %d\n", result);

    return 0;
}