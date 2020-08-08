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
    cin >> s;
    int hashmap[26] = {0};
    bool isPalin = true;
    for (int i = 0; i < s.size(); i++)
        hashmap[s[i] - 'a']++;
    if (s.size() % 2 == 0)
    {
        for (int i = 0; i < 26; i++)
            if (hashmap[i] > 0 and hashmap[i] % 2 == 1)
            {
                isPalin = false;
                break;
            }
    }
    else
    {
        int oddCount = 0;
        for (int i = 0; i < 26; i++)
        {
            if (hashmap[i] % 2 == 1)
                oddCount++;
            if (oddCount > 1)
                break;
        }
        if (oddCount > 1)
            isPalin = false;
    }
    if (isPalin)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}