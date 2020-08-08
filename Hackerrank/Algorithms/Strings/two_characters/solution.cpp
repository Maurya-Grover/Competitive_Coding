// for each text simply check each pair of chars
// for alternating character length to do that
// for each pair - parse through entire string 
// keep track of last acceptable character 
// and keep it updating and at the same time if 
// last character occurs two times without other
// acceptable char occuring then break or else continue
// if the current char is not equal to either of the 
// acceptable characters
#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int slength(string text, char x, char y)
{
    char lastSeen = 0;
    int length = 0;
    for (char ch : text)
    {
        if (ch != x and ch != y)
            continue;
        if (lastSeen == ch)
            return 0;
        lastSeen = ch;
        length++;
    }
    return length >= 2 ? length : 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, s);
    int max_length = 0;
    for (char x = 'a'; x <= 'z'; x++)
        for (char y = x + 1; y <= 'z'; y++)
            max_length = max(max_length, slength(s, x, y));
    cout << max_length;
    newline;
    return 0;
}