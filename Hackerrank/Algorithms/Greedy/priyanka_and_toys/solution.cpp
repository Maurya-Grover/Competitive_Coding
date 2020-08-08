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
    vector<int> orders(n);
    for (int i = 0; i < n; i++)
        cin >> orders[i];
    sort(orders.begin(), orders.end());
    int i = 0, containersNeeded = 1, curMin = orders[0];
    i++;
    while (i < n)
    {
        if (orders[i] <= (curMin + 4))
        {
            i++;
            continue;            
        }
        else
        {
            curMin = orders[i];
            containersNeeded++;
            i++;
        }
    }
    cout << containersNeeded;
    return 0;
}