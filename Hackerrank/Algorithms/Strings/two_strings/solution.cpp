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
    string s1, s2;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (q--)
    {
        getline(cin, s1);
        getline(cin, s2);
        int n1 = s1.size(), n2 = s2.size(), hashmap1[26] = {0}, hashmap2[26] = {0};
        for (int i = 0; i < n1; i++)
            hashmap1[s1[i] - 'a']++;
        for (int i = 0; i < n2; i++)
            hashmap2[s2[i] - 'a']++;
        bool commonSubstring = false;        
        for (int i = 0; i < 26; i++)
            if (hashmap1[i] > 0 and hashmap2[i] > 0)
                commonSubstring = true;
        if (commonSubstring)
            cout << "YES";
        else
            cout << "NO";        
        newline;
    }
    return 0;
}
/*
debug print statement
        for (int i = 0; i < 26; i++)
            cout << hashmap1[i] << " ";
        newline;
        for (int i = 0; i < 26; i++)
            cout << hashmap2[i] << " ";
*/