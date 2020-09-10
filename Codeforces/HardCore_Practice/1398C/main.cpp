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

int findGoodSubArray(vi &a)
{
    //1 indexed
    int count = 0, n = a.size();
    vi prefix(n, 0);
    rep(i, 1, n)
        prefix[i] = prefix[i - 1] + a[i];
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if ((prefix[j] - prefix[i - 1]) == (j - (i - 1)))            
                count++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vi a(n);
        string input;
        cin >> input;
        rep(i, 0, n)
            a[i] = input[i] - '0';
        cout << findGoodSubArray(a);
        //rep(i, 1, n + 1) cout << a[i] << " ";
        newline;
    }
    return 0;
}