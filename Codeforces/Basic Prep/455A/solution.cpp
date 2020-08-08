#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vll;
typedef pair<int, int> pi;
const int MAX_N = 100001;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, temp;
    cin >> n;
    vll dp(MAX_N, 0);
    vll hashmap(MAX_N, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        hashmap[temp]++;
    }
    dp[0] = 0;
    dp[1] = hashmap[1];
    for (int i = 2; i < 100001; i++)
        dp[i] = max(dp[i - 1], (dp[i - 2] + i * hashmap[i]));
    cout << dp[100000];
    return 0;
}