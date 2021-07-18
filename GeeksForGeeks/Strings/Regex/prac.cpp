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
typedef pair<int,int> pi;
ll i, j, k, l, m, n, x, y, z;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string message;
    getline(cin, message);
    regex r("[A-Z][A-Z][A-Z][A-Z][A-Z][0-9][0-9][0-9][0-9][A-Z]");
    smatch m;
    regex_search(message, m, r);
    for(auto x: m)
        cout << x;
    regex s("[a-z]*.com");
    smatch n;
    regex_search(message, n, s);
    cout << "\n";
    for(auto x: n)
        cout << x;
    return 0;
}