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
    int n, evenCount(0), lastEven(-1), lastOdd(-1), temp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        if (temp % 2)
        {
            evenCount--;
            lastOdd = i; // we need index not number
        }
        else
        {
            evenCount++;
            lastEven = i;
        }
    }
    cout << (evenCount > 0 ? lastOdd : lastEven);
    return 0;
}