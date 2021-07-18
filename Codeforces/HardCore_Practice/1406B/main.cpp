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
bool allNeg = true;
bool zero = false;

int maxProd(vi &a)
{
    if (allNeg and zero)
        return 0;
    else if (allNeg)
        return (a[0] * a[1] * a[2] * a[3] * a[4]);
    for (int i = 0; a[i] < 0; i++)
        if (a[i] < 0)
            a[i] *= (-1);
    sort(all(a), [](int x, int y) { return abs(x) > abs(y); });
    ll ans = a[0] * a[1] * a[2] * a[3] * a[4];
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vi a(n);
        allNeg = true;
        zero = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                zero = true;
            if (a[i] > 0)
                allNeg = false;
        }
        sort(all(a));
        cout << maxProd(a);
    }
    return 0;
}