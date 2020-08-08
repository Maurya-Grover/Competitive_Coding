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
    int q;
    string s;
    string match = "hackerrank'";
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // 100 queries and each string atleast 10 ^ 4
    while (q--)
    {
        getline(cin, s);
        string current;
        int i = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (i != 10 and s[j] == match[i])
                i++;
        }
        if (i == 10)
            cout << "YES";
        else
            cout << "NO";
        newline;
    }
    return 0;
}