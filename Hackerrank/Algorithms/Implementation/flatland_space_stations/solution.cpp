// max distance is half the max distance between any two 
// space stations
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
    int n, m;
    cin >> n >> m;
    int station[100005] = {0};

    for (int i = 0; i < m; i++)
        cin >> station[i];

    if (n == m)
        cout << "0";
    else
    {
        sort(station, station + m);
        int max = -1;
        for (int i = 0; i < m - 1; i++)
            if (station[i + 1] - station[i] > max)
                max = station[i + 1] - station[i];
        max = max / 2;
        // first and last city
        if (station[0] > max)
            max = station[0];
        if (n - 1 - station[m - 1] > max)
            max = n - 1 - station[m - 1];
        cout << max;
    }
    return 0;
}