/*
Simple binary seacrh should provide us with logarithmic times and hence with m queries
the complexity becomes mlogn where logn is complexity of binary search on an descending array
*/
#include <bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int leaderboard[n], ranking[n];
    for (int i = 0; i < n; i++)
        cin >> leaderboard[i];
    cin >> m;
    ranking[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (leaderboard[i] == leaderboard[i - 1])
            ranking[i] = ranking[i - 1];
        else
            ranking[i] = ranking[i - 1] + 1;
    }
    for (int i = 0; i < n; i++)
        cout << ranking[i] << " ";

    
    for (int i = 0; i < m; i++)
    {
        int alice;
        cin >> alice;
        int begin = 0, end = n - 1;
        while (begin <= end)
        {
            int mid = (begin + end) / 2;
            if (leaderboard[mid] > alice && (mid == n - 1 || leaderboard[mid + 1] <= alice))
            {
                // leaderboard is in descending order hence the if inverted if condition
                // rank of alice found either last or in between mid and mid + 1
                cout << ranking[mid] + 1 << "\n";
                break;
            }
            else if (leaderboard[mid] > alice)
            { //if score of alice is greater than current half
                begin = mid + 1;
            }
            else
            {
                // in case alice is the first element
                if (mid == 0)
                {
                    cout << "1\n";
                    break;
                }
                // in case alice is less than current half and not top of leaderboard
                end = mid - 1;
            }
        }
    }

    return 0;
}