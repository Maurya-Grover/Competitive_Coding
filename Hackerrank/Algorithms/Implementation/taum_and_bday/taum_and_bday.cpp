// greedy type approach if converted gifts are cheaper
// buy only the converted goods for the total gifts needed
// but add the conversion cost to total cost for the
// gifts converted
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; // 1-10
    cin >> t;
    long long int totalCost;
    while (t--)
    {
        long long int b, w, bc, wc, z; // 0-10^9
        cin >> b >> w;
        cin >> bc >> wc >> z;
        // b and w =  number of black and white gifts respectively
        // bc = cost of b gifts
        // wc  = cost of w gifts
        // z = cost of converting black to white gift or vice-versa

        if ((wc + z) < bc)
            bc = wc + z;
        else if ((bc + z) < wc)
            wc = bc + z;
        totalCost = bc * b + wc * w;
        cout << totalCost;
        newline;
    }
    return 0;
}