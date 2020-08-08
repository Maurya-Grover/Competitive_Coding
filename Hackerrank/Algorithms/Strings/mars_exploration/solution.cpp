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
    string s;
    getline(cin, s);
    string expectedMessage;
    for (int i = 0; i < 33; i++)
    {
        expectedMessage.push_back('S');
        expectedMessage.push_back('O');
        expectedMessage.push_back('S');
    }
    int n = s.size(), count = 0;
    for (int i = 0; i < n; i++)
        if (expectedMessage[i] != s[i])
            count++;
    cout << count;
    return 0;
}