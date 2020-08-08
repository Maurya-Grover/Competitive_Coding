// simply print a[(m-(k%n) + n) % n]
// write testcases for n = 7, multiple m and k this formula should be arrived at pretty easily
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, q;
    cin >> n >> k >> q;
    k = k % n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (q--)
    {
        int m;
        cin >> m;
        int index = m - k;
        if (index >= 0)
            cout << a[index];
        else
            cout << a[index + n];
        newline;
    }
    return 0;
}