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
    int deletions = 0;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int hashmap1[26] = {0}, hashmap2[26] = {0};
    for (int i = 0; i < s1.size(); i++)
        hashmap1[s1[i] - 'a']++;
    for (int i = 0; i < s2.size(); i++)
        hashmap2[s2[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        int diff = abs(hashmap1[i] - hashmap2[i]);
        deletions += diff;
    }
    cout << deletions;
    return 0;
}