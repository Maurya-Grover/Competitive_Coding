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
    int n;
    // n - number of customers
    cin >> n;
    multimap<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int temp, temp2;
        cin >> temp >> temp2;
        m.insert(mp(temp + temp2, i));
    }
    for (multimap<int, int>::iterator me = m.begin(); me != m.end(); me++)
        cout << me->second << " ";
    return 0;
}