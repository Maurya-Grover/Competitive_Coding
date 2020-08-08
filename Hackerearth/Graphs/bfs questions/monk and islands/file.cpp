#include <bits/stdc++.h>
using namespace std;

const int MAX = 10005;

int t, n, m, x, y;
vector<int> adj[MAX];
int level[MAX] = {0};
bool visited[MAX] = {false};

void bfs(int s)
{
    visited[s] = true; // source will always get visited 
    level[s] = 0; // level of source is zero 
    queue<int> q;
    q.push(s);
    while (!q.empty()) 
    {
        int k = q.front(); //get first element
        q.pop(); //pops first element
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
    memset(level,0,MAX);
    memset(visited,false,MAX);
    for(int i = 1; i < n; i++)
        adj[i].clear();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t)
    {
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(1);
        cout<<level[n]<<"\n";
        reset();
        t--;
    }
    return 0;
}