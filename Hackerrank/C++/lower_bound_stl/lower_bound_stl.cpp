#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, temp;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    while(q--)
    {
        int y;
        cin >> y;
        vector <int>::iterator lower = lower_bound(a.begin(), a.end(), y);
        if(a[lower - a.begin()] == y)
            cout << "Yes " << (lower - a.begin() + 1) << endl;
        else
            cout << "No " << (lower - a.begin() + 1) << endl;
    }
    return 0;
}