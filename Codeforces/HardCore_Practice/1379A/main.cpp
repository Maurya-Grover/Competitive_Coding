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
ll k, l, m, n, x, y, z;

bool isSub(string &s, string &match)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.substr(i, 7) == match)
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        string match = "abacaba";
        string ans;
        cin >> s;
        bool solved = false;
        int i, j;
        for (int i = 0; i + 7 < n; i++)
        {
            string copy = s;
            bool ok = true;
            for (j = 0; j < 7; j++)
            {
                if (copy[i + j] != '?' and copy[i + j] != match[j])
                {
                    ok = false;
                    break;
                }
                copy[i + j] = match[j];
            }
            if (ok and isSub(copy, match))
            {
                for (int k = 0; k < n; k++)
                {
                    if (copy[k] == '?')
                        copy[k] = 'd';
                }
                solved = true;
                cout << "Yes\n " << copy;
                newline;
                break;
            }
        }
        if (not solved)
            cout << "No \n ";
    }
    return 0;
}