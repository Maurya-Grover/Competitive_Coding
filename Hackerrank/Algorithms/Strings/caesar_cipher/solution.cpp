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
    int n, k;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s, result;
    getline(cin, s);
    cin >> k;
    k = k % 26;
    for(char c:s)
    {
        if(c >= 'a' and c <= 'z')
            result.push_back((char)('a' + (((c - 'a') + k) % 26)));
        else if(c >= 'A' and c <= 'Z')
            result.push_back((char)('A' + (((c - 'A') + k) % 26)));
        else
            result.push_back(c);
    }    
    cout << result;
    return 0;
}