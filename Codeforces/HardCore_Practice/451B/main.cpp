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

pair<string, pair<int, int>> solve(vi &a)
{
    int l = 0;
    while (a[l] <= a[l + 1] and l < n)
        l++;
    if (l == n - 1)
        return {"yes", {1, 1}};
    int r = l;
    while (a[r] >= a[r + 1] and r < n)
        r++;
    reverse(a.begin() + l, a.end() + r);
    bool resolved = true;
    for(i = 0; i < n - 1; i++)
        if(not a[i] <= a[i + 1])
        {
            resolved = false;
            break;
        }
    if(resolved)
        return {"yes", {l + 1, r + 1}};
    return {"no", {0, 0}};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    pair<string, pair<int, int>> ans = solve(a);
    if (ans.first == "yes")
        std::cout << ans.first << "\n"
                  << ans.second.first << " " << ans.second.second;
    else
        std::cout << ans.first;
    return 0;
}