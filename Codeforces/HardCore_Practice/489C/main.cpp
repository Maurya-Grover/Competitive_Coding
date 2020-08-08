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

bool possible(int m, int s)
{
    return ((s >= 0) and (s <= 9 * m));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, s, sum;
    cin >> m >> s;
    string min(""), max("");
    if ((s <= 0 and m > 1) or (s > 9 * m))
    {
        cout << "-1 -1";
        return 0;
    }
    sum = s;
    for (int pos = 1; pos <= m; pos++) // keeps track of number of digits
    {
        for (int digit = 9; digit >= 0; digit--)
        {
            if (possible(m - pos, sum - digit))
            {
                max += ('0' + digit);
                sum -= digit;
                break;
            }
        }
    }
    sum = s;
    for (int pos = 1; pos <= m; pos++)
    {
        for (int digit = 0; digit <= 9; digit++)
        {
            if ((pos > 1 || digit > 0 || (m == 1 and digit == 0)) and possible(m - pos, sum - digit))
            {
                min += ('0' + digit);
                sum -= digit;
                break;
            }
        }
    }
    cout << min << " " << max;
    return 0;
}