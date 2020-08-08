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
    cin >> n;
    string arr[n];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < n; i++)
        getline(cin, arr[i]);
    int hashmap[n][26] = {{0}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            hashmap[i][(int)(arr[i][j] - 'a')]++;
        }
    }
    int gemCount = 0;
    for (int i = 0; i < 26; i++)
    {
        // i is the current gem we're checking
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (hashmap[j][i] >= 1)
                count++;
        }
        if (count == n)
            gemCount++;
    }
    cout << gemCount;
    return 0;
}