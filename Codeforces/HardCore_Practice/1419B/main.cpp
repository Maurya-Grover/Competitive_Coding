#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define all(a) a.begin(), a.end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define sinput cin.ignore(numeric_limits<streamsize>::max(), '\n')
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
ll i, j, k, l, m, n, x, y, z;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll sum = 1;
    ll p = 1;
    vll preComp;
    while (sum < 1e18 and sum > 0)
    {
        ll temp = (sum * (sum + 1)) / 2;
        if (temp < 1e18)
            preComp.pb(temp);
        else
            break;
        p = p * 2;
        sum = sum + p;
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        int path = 0;
        for (auto it : preComp)
        {
            x -= it;
            if (x < 0)
                break;
            path++;
        }
        cout << path;
        newline;
    }
    return 0;
}