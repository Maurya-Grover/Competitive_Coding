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
    int weight;
    cin >> weight;
    if (weight % 2)
        cout << "NO";
    else
    {
        if (weight == 2)
            cout << "NO";
        else
            cout << "YES";
    }
    return 0;
}