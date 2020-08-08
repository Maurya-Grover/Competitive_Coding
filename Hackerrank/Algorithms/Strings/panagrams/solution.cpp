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
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });
    int hashmap[26] = {0};
    for (int i = 0; i < s.size(); i++)
        hashmap[s[i] - 'a']++;
    bool isPanagram = true;
    for (int i = 0; i < 26; i++)
        if (hashmap[i] == 0)
            isPanagram = false;
    if (isPanagram)
        cout << "pangram";
    else
        cout << "not pangram";
    return 0;
}