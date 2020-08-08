//limit of int is (2^31) - 1 hence the number of cycles is limited to 60
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int treeHeightMap[61];
    treeHeightMap[0] = 1;
    for (int i = 1; i < 61; i++)
    {
        if (i % 2)
            treeHeightMap[i] = treeHeightMap[i - 1] * 2;
        else
            treeHeightMap[i] = treeHeightMap[i - 1] + 1;
    }
    /*//debug print statements
    for (int i = 0; i < 61; i++)
        cout<<treeHeightMap[i]<<" ";*/
    while (t)
    {
        int x;
        cin >> x;
        cout << treeHeightMap[x];
        newline;
        t--;
    }
    return 0;
}