#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m = 1500;
    cin >> n;
    int parent[n], level[n], leaf[n];
    for (int i = 1; i < n; i++)
    {
        cin >> parent[i];
        leaf[i] = 0;
    }
    queue<int> BFS;
    level[0] = 0;
    BFS.push(0);
    while (!BFS.empty())
    {
        int x = BFS.front();
        BFS.pop();
        int f = 0;
        for (int i = 1; i < n; i++)
        {
            if (parent[i] == x)
            {
                f = 1;
                BFS.push(i);
                level[i] = level[x] + 1;
            }
        }
        if (!f)
        {
            leaf[x] = 1;
            m = min(m, level[x]);
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (leaf[i] && level[i] == m)
            cout << i << " ";
    }
}