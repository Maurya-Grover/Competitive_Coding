#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

string solve2(string input)
{
    ll p = 0;
    ll fail = string::npos;
    p = input.find("AB");
    if (p != fail and input.find("BA", p + 2) != fail)
        return "YES";
    p = input.find("BA");
    if (p != fail and input.find("AB", p + 2) != fail)
        return "YES";
    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    cin >> input;
    cout << solve2(input);
    return 0;
}