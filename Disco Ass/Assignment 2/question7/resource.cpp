#include <bits/stdc++.h>
using namespace std;

int n, m;
const int Max = 20;
vector<int> adj[Max + 1];
bool visited[Max + 1];
bool flag = false;
set<int> ans, cycles;

void dfs(int s)
{
    if (visited[s])
    {
        flag = true;
        cycles.insert(s);
        return;
    }
    visited[s] = true;
    for (auto i : adj[s])
        dfs(i);
}
void dfs1(int s)
{
    if (visited[s])
    {
        return;
    }
    ans.insert(s);
    visited[s] = true;
    for (auto i : adj[s])
        dfs1(i);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[y].push_back(x);
    }
    for (int i = 0; i <= n; i++)
    {
        memset(visited, false, sizeof(visited));
        dfs(i);
    }

    if (cycles.size() == 0)
    {
        cout << "No Deadlock";
        return 0;
    }
    memset(visited, false, sizeof(visited));
    cout << "Deadlock\n";
    for (auto i : cycles)
        dfs1(i);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}