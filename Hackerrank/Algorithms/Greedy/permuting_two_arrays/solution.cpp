#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q, n, k;
    cin >> q;
    while (q--)
    {
        cin >> n >> k;
        vi a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());
        bool validPermutationExists = true;
        for (int i = 0; i < n; i++)
            if ((a[i] + b[i]) < k)
            {
                validPermutationExists = false;
                break;
            }
        if (validPermutationExists)
            cout << "YES";
        else
            cout << "NO";
        newline;
    }
    return 0;
}