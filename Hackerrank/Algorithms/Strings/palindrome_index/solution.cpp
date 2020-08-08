#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

bool isPalin(string text)
{
    int l = text.size();
    for (int i = 0; i < (l / 2); i++)
        if (text[i] != text[l - 1 - i])
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    string s;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (q--)
    {
        string copy;
        getline(cin, s);
        if (isPalin(s))
        {
            cout << "-1";
            newline;
        }
        else
        {
            int n = s.size();
            for (int i = 0; i < n; i++)
            {
                if (s[i] != s[n - 1 - i])
                {
                    if (isPalin(s.substr(i, n - 1 - 2 * i)))
                        // if we are considering first i chars
                        // then length of palindrome is 2 * i
                        cout << n - 1 - i;
                    else
                        cout << i;
                    newline;
                    break;
                }
            }
        }
    }
    return 0;
}