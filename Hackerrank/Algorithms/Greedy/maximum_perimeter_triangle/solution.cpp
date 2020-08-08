#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

bool notTriangle(int a, int b, int c)
{
    if(a + b <= c) return true;
    if(a + c <= b) return true;
    if(b + c <= a) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vi sticks(n);
    for (int i = 0; i < n; i++)
        cin >> sticks[n];
    sort(sticks.rbegin(), sticks.rend());
    for (int i = 0; i < n - 2; i++)
    {
        if (not notTriangle(sticks[i],sticks[i + 1],sticks[i + 2]))
        {
            cout << sticks[i + 2] << " " << sticks[i + 1] << " " << sticks[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}