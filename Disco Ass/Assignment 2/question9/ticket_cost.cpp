#include <bits/stdc++.h>
using namespace std;
int n, m, p, q, ans = 10e5;
vector<int> adj[10];
vector<int> path;
int cost[10][10];
bool flag = false;
set<int> s;
void dfs(int node, int weight)
{
    s.insert(node);
    if (node == q)
    {
        ans = min(ans, weight);
    }
    for (auto i : adj[node])
    {
        if (s.find(i) == s.end())
        {
            dfs(i, weight + cost[node][i]);
        }
    }
    s.erase(node);
}
void dfs1(int node, int weight)
{
    s.insert(node);
    if(ans == weight && node == q)
    {
        path.push_back(node);
        flag = true;
        return;
    }
    for(auto i:adj[node])
    {
        if(s.find(i)==s.end())
        {
            dfs1(i,weight+cost[node][i]);
        }
        if(flag)
        {
            path.push_back(node);
            return;
        }
    }
    s.erase(node);
}
int main()
{
    cin >> n >> m >> p >> q;
    for (int i = 0; i < m; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
        adj[x].push_back(y);
        adj[y].push_back(x);
        cost[x][y] = c;
        cost[y][x] = c;
    }
    dfs(p,0);
    s.clear();
    dfs1(p,0);
    cout<<ans<<"\n";
    reverse(path.begin(),path.end());
    for(auto i: path)
    cout<<i<<" ";

    return 0;
}