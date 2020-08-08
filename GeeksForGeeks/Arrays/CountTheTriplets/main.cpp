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
        int n, count = 0;
        bool atleast1 = false;
        cin >> n;
        vi a(n);
        rep(i, 0, n) cin >> a[i];
        sort(a.begin(), a.end());
        rep(curNum, 0, n)
        {
            int i = 0, j = n - 1;
            while (i < j)
            {
                if (a[i] + a[j] == a[curNum])
                {
                    count++;
                    i++;
                    j--;
                }
                else if (a[i] + a[j] < a[curNum])
                    i++;
                else
                    j--;
            }
        }
        if (count == 0)
            cout << "-1";
        else
            cout << count;
        newline;
    }
    return 0;
}