#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define all(a) (a.begin(), a.end())
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
ll i, j, k, l, m, n, x, y, z;

ll minCost(vll &a)
{
    sort(a.begin(), a.end());
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vll a(n);
    rep(i, 0, n) cin >> a[i];
    cout << minCost(a);
    return 0;
}