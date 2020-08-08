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
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // 100 queries
    // each string size at max 10^4
    while (q--)
    {
        getline(cin, s);
        int n = s.size();
        if (n % 2)
            cout << "-1";
        else
        {
            int half1[26] = {0};
            int half2[26] = {0};
            int count = 0;
            for (int i = 0; i < n / 2; i++)
                half1[s[i] - 'a']++;
            for (int i = n / 2; i < n; i++)
                half2[s[i] - 'a']++;
            for (int i = 0; i < 26; i++)
                count += abs(half1[i] - half2[i]);
            // cost to change 1 char to another is (diff in their count / 2)
            cout << count / 2;
        }
        newline;
    }
    return 0;
}