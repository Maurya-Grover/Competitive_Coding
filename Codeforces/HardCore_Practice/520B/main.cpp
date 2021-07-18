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

int solve(int n, int m)
{
    if (m < n)
        return (n - m);
    int count = 0;
    while (n != m)
    {
        if (m > n)
        {
            if (m % 2 == 0)
                m /= 2;
            else
                m++;
            count++;
        }
        else if (n > m)
        {
            m++;
            count++;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    cout << solve(n, m);
    return 0;
}