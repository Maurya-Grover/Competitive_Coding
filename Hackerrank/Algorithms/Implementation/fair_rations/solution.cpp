// we are always adding 2 bread loaves as a result
// if the sum is odd then it will remain odd for
// each operation if it is even it will remain even
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
    int n, sum = 0;
    cin >> n;
    vector<int> b(n);
    rep(i, 0, n)
    {
        cin >> b[i];
        b[i] = b[i] % 2;
    }
    int ans = 0;
    rep(i, 0, n - 1)
    {
        // distribute loaves if current peasant has odd loaves
        if (b[i])
        {
            ans += 2;
            b[i]--;
            b[i + 1] = (b[i + 1] + 1) % 2;
        }
    }
    // if last peasant has even loaves then problem solved
    // else the problem can't be solved
    if (b[n - 1])
        cout << "NO";
    else
        cout << ans;
    newline;
    return 0;
}