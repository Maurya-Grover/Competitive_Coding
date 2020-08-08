#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        int cost[n + 1], hashMap[10001];
        memset(hashMap, 0, sizeof(hashMap));
        for (int i = 1; i <= n; i++)
        {
            cin >> cost[i];
            hashMap[cost[i]] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            // hashMap[m - cost[i]] != 0 because it is 1- indexed and the lowest value is 1
            //and hashMap[m - cost[i]] != i
            if (m >= cost[i] and hashMap[m - cost[i]] != 0 )
            {
                cout << i << " " << hashMap[m - cost[i]];
                newline;
                break;
            }
        }
    }
    return 0;
}