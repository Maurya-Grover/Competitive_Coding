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
    int n;
    ll l, maxDiff = INT_MIN;
    double poss1, poss2, poss3, ans;
    cin >> n >> l;
    vll a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
        if (a[i] - a[i - 1] > maxDiff)
            maxDiff = a[i] - a[i - 1];
    poss1 = maxDiff / 2.0;
    poss2 = a[0] - 0;
    poss3 = l - a[n - 1];
    ans = max(poss1, max(poss2, poss3));
    printf("%.10f", ans);
    return 0;
}