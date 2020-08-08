#include <bits/stdc++.h>
using namespace std;

const int MAX = 10005;

int n, e, u, v, m, t, source;
vector<int> adj[MAX];
int level[MAX] = {0};
bool visited[MAX] = {false};

void bfs(int s)
{
    visited[s] = true; // source will always get visited
    level[s] = 0;      // level of source is zero
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int k = q.front(); //get first element
        q.pop();           //pops first element
        for (auto i : adj[k])
        {
            if (!visited[i])
            {
                visited[i] = true;
                level[i] = level[k] + 1;
                q.push(i);
            }
        }
    }
}

void reset()
{
    memset(level, 0, MAX);
    memset(visited, false, MAX);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> e;
    int q = e;
    while (q)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        q--;
    }
    cin >> m;
    while (m)
    {
        cin >> source >> t;
        bfs(source);
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if(level[i] == t)
                count++;
        }
        cout<<count<<"\n";      
        reset();
        m--;
    }
    return 0;
}