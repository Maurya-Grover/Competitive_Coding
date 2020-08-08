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
    map<string, int> data;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (n--)
    {
        string input;
        cin >> input;
        if (data.count(input) == 0)
        {
            cout << "OK";
            data[input] = 1;
        }
        else
        {
            cout << input << data[input];
            data[input]++;
        }
        newline;
    }
    return 0;
}