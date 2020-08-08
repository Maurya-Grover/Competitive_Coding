#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int like = 2, cumulativeLikes = 2;
    for (int i = 1; i < n; i++)
    {
        like = (like * 3) / 2;
        cumulativeLikes = like + cumulativeLikes;
    }
    cout << cumulativeLikes;
    return 0;
}