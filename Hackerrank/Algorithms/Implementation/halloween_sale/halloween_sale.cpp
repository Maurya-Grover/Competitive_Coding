#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p, d, m, s;
    // p - price of games
    cin >> p >> d >> m >> s;
    int noOfGames = 0;
    while (p > m && s >= 0)
    {
        s = s - p;
        p = ((p - d) < m) ? m : (p - d);
        noOfGames++;
    }
    while (s > 0)
    {
        s = s - p;
        if (s > 0)
            noOfGames++;
    }
    cout << noOfGames;
    return 0;
}