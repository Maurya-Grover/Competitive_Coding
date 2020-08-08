#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector <int> a[n];
    for(int i = 0; i < n; i++)
    {
        int m, o;
        cin >> m;
        for(int j = 0; j < m; j++)
        {
            cin >> o;
            a[i].pb(o);
        }
        
    }
    int r, s;
    for(int i = 1; i <=q ; i++)
    {
        cin >> r >> s;
        cout << a[r][s] << " \n";
    }    
    return 0;
}