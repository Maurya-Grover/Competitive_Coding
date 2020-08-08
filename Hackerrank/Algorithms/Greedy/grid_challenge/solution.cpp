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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s[n];
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        for (int i = 0; i < n; i++)
        {
            getline(cin, s[i]);
            sort(s[i].begin(), s[i].end());
        }            
        bool sorted = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
                if (s[j][i] > s[j + 1][i])
                {
                    sorted = false;
                    break;
                }
        }
        if (sorted)
            cout << "YES";
        else
            cout << "NO";
        newline;
    }
    return 0;
}