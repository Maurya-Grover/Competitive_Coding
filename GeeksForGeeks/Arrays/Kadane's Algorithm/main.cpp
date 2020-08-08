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

int maxSubArraySum(vi &a, int n)
{
    int i = 0, j = 0;
    int maxSoFar(INT_MIN), maxEndingHere(0);
    for (auto element : a)
    {
        maxEndingHere += element;
        if (maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
        if (maxEndingHere < 0)
            maxEndingHere = 0;
    }
    return maxSoFar;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        rep(i, 0, n) cin >> a[i];
        cout << maxSubArraySum(a, n);
        newline;
    }
    return 0;
}