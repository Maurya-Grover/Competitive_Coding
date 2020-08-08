// if 010 is encountered simply change second 0
// to 1 and do this for each 010
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
    int n, noOfMoves = 0;
    string b;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> b;
    for (int i = 0; i <= n - 3; i++)
    {
        if (b[i] == '0' and b[i + 1] == '1' and b[i + 2] == '0')
        {
            b[i + 2] = '1';
            noOfMoves++;
        }
    }
    cout << noOfMoves;
    return 0;
}