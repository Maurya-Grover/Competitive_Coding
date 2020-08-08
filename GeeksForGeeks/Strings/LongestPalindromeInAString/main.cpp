#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

int expandAroundMiddle(string s, int left, int right)
{
    if (s == "" or left > right)
        return 0;
    while (left >= 0 and right < s.size() and s[left] == s[right])
    {
        left--;
        right++;
    }
    // our substring lies between left + 1 and right
    // for the last equal characters they were reevaluated
    return (right - (left + 1));
}

string longestPalindrome(string s)
{
    if (s == "" or s.size() <= 1)
        return s;
    int start = 0, end = 0;
    rep(i, 0, s.size())
    {
        int len1 = expandAroundMiddle(s, i, i);     // odd number of char string
        int len2 = expandAroundMiddle(s, i, i + 1); // even number string
        int len = max(len1, len2);
        if (len > end - start)
        {
            start = i - ((len - 1) / 2);
            end = i + (len / 2);
        }
    }
    return s.substr(start, (end + 1) - start);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string input;
        cin >> input;
        cout << longestPalindrome(input);
        newline;
    }
    return 0;
}
// debug statements
//cout << expandAroundMiddle(input, 0, input.size());