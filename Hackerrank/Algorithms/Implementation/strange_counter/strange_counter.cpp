#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, currentTop = 3;
    cin >> t;
    // find max value for given time that is just greater than given time
    // along with update diff between top and currTime until top is less than current top
    while (t > currentTop)
    {
        t = t - currentTop;
        currentTop = currentTop * 2;
    }
    cout << currentTop + 1 - t;
    return 0;
}