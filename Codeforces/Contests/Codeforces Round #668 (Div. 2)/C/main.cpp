#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        int n, k;
        cin >> n >> k;
        string input;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> input;
        string ans = "NO";
        for(int i = 0; i <= n - k; i++)
        {
            for(int j = i; j <= i + k - 1; j++)
            {
                
            }
        }
        cout << ans;
        newline;
    }
    return 0;
}