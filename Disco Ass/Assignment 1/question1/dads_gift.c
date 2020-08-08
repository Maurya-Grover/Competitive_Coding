#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int max(int x, int y)
{
    return (x > y) ? x : y;
}
int main()
{
    int n;
    long long int x;
    scanf("%d %lld", &n, &x);
    long long int a[n];
    long long int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long int matrix[n + 1][x + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (i == 0 || j == 0)
            {
                matrix[i][j] = 0;
            }
            else if (a[i - 1] <= j)
            {
                matrix[i][j] = max(a[i - 1] + matrix[i - 1][j - a[i - 1]], matrix[i - 1][j]);
            }
            else
            {
                matrix[i][j] = matrix[i - 1][j];
            }
        }
    }
    int z = matrix[n][x];
    int ans = 0;
    long long int m = x;
    for (int i = n; i > 0 && z > 0; i--)
    {
        if (z == matrix[i - 1][m])
        {
            continue;
        }
        else
        {
            b[ans++] = i;
            z = z - a[i - 1];
            m = m - a[i - 1];
        }
    }
    printf("%d \n", ans);
    for (int i = 0; i < ans; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
