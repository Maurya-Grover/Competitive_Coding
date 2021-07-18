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
ll i, j, k, l, m, n, x, y, z;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vi b(n);
    rep(i, 0, n) cin >> b[i];
    ll maC = 0, miC = 0;
    ll count = 0;
    int max = *max_element(b.begin(), b.end());
    int min = *min_element(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        maC += (b[i] == max);
        miC += (b[i] == min);
    }
    if (max == min)
        count = n * (n - 1) / 2;
    else
        count = maC * miC;
    cout << max - min << " " << count;
    return 0;
}