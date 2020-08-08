#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, c, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> c >> m;
        // n - intial money
        // c - cost of a chocolate bar
        // m - no of wrappers for a free bar
        // print of no of chocolates to be eaten
        int wrappersAvailable = n / c, chocolatesEaten = n / c;
        while (wrappersAvailable >= m)
        {
            chocolatesEaten = chocolatesEaten + wrappersAvailable / m;
            wrappersAvailable = (wrappersAvailable / m) + (wrappersAvailable % m);
        }
        cout << chocolatesEaten;
        newline;
    }
    return 0;
}