// Lena has to compete in all competitions
// after loosing all she can she has to win
// remaining contests and their negative luck 
// has to be adjusted and not just 1 competition
// that is won
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
    int n, k, luck, luck_balance = 0;
    bool imp;
    cin >> n >> k;
    vi important;
    for (int i = 0; i < n; i++)
    {
        cin >> luck >> imp;
        if (imp)
            important.push_back(luck);
        else
            luck_balance += luck;
    }
    sort(important.rbegin(), important.rend());
    for (int luck : important)
    {
        if (k-- > 0)
        {
            luck_balance += luck;
            // cout << "adding - " << luck;
        }
        else
        {
            luck_balance -= luck;
            // cout << "subtracting - " << luck;
        }
        newline;
    }
    cout << luck_balance;
    return 0;
}
