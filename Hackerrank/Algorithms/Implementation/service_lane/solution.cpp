#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i, j; // n ~ 1,00,000 and t ~ 1000
    cin >> n >> t;
    int width[n + 1];
    for (int i = 0; i < n; i++)
        cin >> width[i];
    while (t--)
    {
        cin >> i >> j;
        int min = 4;
        for (int k = i; k <= j; k++)
            if (min > width[k])
                min = width[k];
        cout << min;
        newline;
    }
    return 0;
}