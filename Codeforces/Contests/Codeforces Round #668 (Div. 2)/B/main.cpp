#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
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
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vi a(n);
        rep(i, 0, n) cin >> a[i];
        long long int ans = INT_MAX, sum = 0;
        {
            for (int i = 0; i < n; i++)
            {
                sum = sum + a[i];
                if (sum <= ans)
                    ans = sum;
            }
        }
        cout << abs(ans);
        newline;
    }
    return 0;
}