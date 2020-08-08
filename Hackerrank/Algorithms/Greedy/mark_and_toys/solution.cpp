#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, count = 0;
    cin >> n >> k;
    // n - no of priced toys
    // k - amount mark has to spend
    vi prices(n);
    for (int i = 0; i < n; i++)
        cin >> prices[i];
    sort(prices.begin(), prices.end());
    for (int i = 0; i < n; i++)
        if ((k - prices[i]) > 0)
        {
            count++;
            k -= prices[i];
        }
    cout << count;
    return 0;
}