#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
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
    int n, m, a, b;
    int cost(0);
    cin >> n >> m >> a >> b;
    if (a <= b / m)
        cout << n * a;
    else
        cout << (n / m) * b + min(b, (n % m) * a);
    return 0;
}