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
    int t, n, threes = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        threes = 0;
        while (n % 3 != 0)
        {
            n = n - 5;
            threes++;
        }
        if (n < 0)
            cout << "-1";
        else
        {
            while (n != 0)
            {
                cout << "555";
                n = n - 3;
            }
            while (threes--)
                cout << "33333";
        }
        newline;
    }
    return 0;
}