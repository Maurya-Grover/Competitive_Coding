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
ll i, j, k, l, m, n, x, y, z, t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> t;
    vi a(n + 1);
    rep(i, 1, n + 1) cin >> a[i];
    vi psum(n + 1);
    psum[0] = 0;
    rep(i, 1, n + 1) psum[i] = psum[i - 1] + a[i];
    int max = -1;
    for(int i = 0; i <= n; i++)
    {
        ll toFind = psum[i] + t;
        ll lastBookIndex = upper_bound(psum.begin(), psum.end(), toFind) - psum.begin();
        lastBookIndex--;
        if(lastBookIndex - i >= max)
            max = lastBookIndex - i;
    }
    cout << max;
    return 0;
}