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
    int t;
    cin >> t;
    while (t--)
    {
        int n, majElement(-1);
        cin >> n;
        vi a(n), hashmap(1000001);
        rep(i, 0, n)
        {
            cin >> a[i];
            hashmap[a[i]]++;
        }
        rep(i, 0, 1000001)
        {
            if (hashmap[i] > (n / 2))
                majElement = i;
        }
        cout << majElement;
        newline;
    }
    return 0;
}