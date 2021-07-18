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
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a;
        set<int> s;
        rep(i, 0, n)
        {
            cin >> a;
            s.insert(a);
        }
        if (s.size() > k)
        {
            cout << -1;
            newline;
            continue;
        }
        cout << n * k;
        newline;
        rep(i, 0, n)
        {
            for (int b : s)
                cout << b << ' ';
            rep(j, 0, k - (int)s.size())
                cout << 1 << ' ';
        }
        newline;
    }
    return 0;
}