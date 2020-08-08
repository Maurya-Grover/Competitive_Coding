#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n - 1);
        rep(i, 0, n - 1) cin >> a[i];
        if (n <= 2)
        {
            if (a[0] == 1)
                cout << "2";
            else
                cout << "1";
        }
        else
        {
            sort(a.begin(), a.end());
            bool solved = false;
            rep(i, 1, n - 1)
            {
                if (a[i] != a[i - 1] + 1)
                {
                    cout << a[i - 1] + 1;
                    solved = true;
                    break;
                }
            }
            if (not solved)
            {
                if (a[n - 2] == n - 1)
                    cout << n;
                else
                    cout << "1";
            }
        }
        newline;
    }
    return 0;
}