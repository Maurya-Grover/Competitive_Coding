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
    int value, n, temp, i = 0;
    cin >> value;
    cin >> n;
    while (cin >> temp)
    {
        if (value == temp)
            cout << i;
        i++;
    }
    return 0;
}