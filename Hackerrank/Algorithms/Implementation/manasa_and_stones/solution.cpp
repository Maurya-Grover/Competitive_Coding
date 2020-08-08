#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> a;
        cin >> b;
        if (a != b)
        {
            int permutations[n];
            for (int i = 0; i < n; i++)
            {
                int temp = (a * (n - 1 - i)) + (b * i);
                permutations[i] = temp;
            }
            sort(permutations, permutations + n);
            for (int i = 0; i < n; i++)
                cout << permutations[i] << " ";
        }
        else
        {
            cout << a * (n - 1);
        }
        newline;
    }
    return 0;
}