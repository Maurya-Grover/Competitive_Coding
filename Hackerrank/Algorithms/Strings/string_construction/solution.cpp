// if a subtring exists then eah of its characters
// exists as well and since cost is 0 we can check for
// each character rather than entire string
// this leads to:- if a character exists only then
// it won't cost so just count number of distinct characters
// essentially
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
    int n;
    string input, copy;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (n--)
    {
        cin >> input;
        int cost = 0;
        int hashmap[26] = {0};
        for (int i = 0; i < input.size(); i++)
            hashmap[input[i] - 'a'] = 1;
        for (int i = 0; i < 26; i++)
            if (hashmap[i] == 1)
                cost++;
        cout << cost;
        newline;
    }
    return 0;
}