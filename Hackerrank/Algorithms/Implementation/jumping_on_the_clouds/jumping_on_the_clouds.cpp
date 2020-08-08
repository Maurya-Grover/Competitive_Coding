#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    // 0 implies safe
    // 1 implies must avoid
    // ok to jump on any cumulus with one or two jumps
    int jumpsReq = 0;
    int i = 0;
    while (i < n - 3)
    {
        if (c[i + 2] == 0)
        {
            i = i + 2;
            jumpsReq++;
        }
        else if (c[i + 1] == 0 and c[i + 2] == 1)
        {
            i++;
            jumpsReq++;
        }
    }
    jumpsReq++;
    cout << jumpsReq;
    return 0;
}