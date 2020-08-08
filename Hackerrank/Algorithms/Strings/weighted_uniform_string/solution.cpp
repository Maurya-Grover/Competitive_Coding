// we need weight subsets of only uniform substrings and not all substrings
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
    int n, query;
    string s;
    getline(cin, s);
    cin >> n;
    set<int> w;
    char pre_char = '@';
    int curWeight;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != pre_char)
        {
            pre_char = s[i];
            curWeight = s[i] - 'a' + 1;
            w.insert(curWeight);
        }
        else
        {
            curWeight += (s[i] - 'a' + 1);
            w.insert(curWeight);
        }
    }
    while (n--)
    {
        cin >> query;
        cout << (w.count(query) ? "Yes" : "No");
        newline;
    }
    return 0;
}