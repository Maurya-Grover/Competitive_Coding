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
    int n, a, b, c, ans(0);
    cin >> n >> a >> b >> c;
    rep(i, 0, 4010)
    {
        rep(j, 0, 4010)
        {
            if ((n - i * a - j * b) % c == 0)
            {
                int temp = (n - i * a - j * b) / c;
                if ((n - i * a - j * b) < 0)
                    break;
                ans = max(ans, i + j + temp);
            }
        }
    }
    cout << ans;
    return 0;
}