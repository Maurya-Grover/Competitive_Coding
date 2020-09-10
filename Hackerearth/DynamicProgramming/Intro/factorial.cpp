#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    vll a(100001);
    a[0] = 1;
    for (int i = 1; i <= 100000; i++)    
        a[i] = (ll)((a[i - 1] * i) % mod);    
    while (q--)
    {
        int n;
        cin >> n;
        cout << a[n];
        newline;
    }
    return 0;
}