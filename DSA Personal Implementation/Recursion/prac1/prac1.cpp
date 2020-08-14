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

void recur(int n)
{
    if (n == 0)
    {
        cout << "\n";
        return;
    }
    cout << n << " ";
    recur(n - 1);
    cout << n << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    recur(n);
    return 0;
}