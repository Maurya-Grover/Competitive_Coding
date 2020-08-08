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
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (n--)
    {
        string input;
        // word is long if length is strictly greater than 10
        getline(cin, input);
        if (input.size() > 10)
            cout << input[0] << input.size() - 2 << input[input.size() - 1];
        else
            cout << input;
        newline;
    }
    return 0;
}