#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e3 + 5;
vector<int> adj[N];
bool visited[N] = {false};
int parent[N] = {0};
void bfs(int s)
{
    parent[s] = -1; //source has no parent
    visited[s] = true; // source is always visited
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int k = q.front();
        q.pop();
        for (auto i : adj[k])
        {
            if (!visited[i])
            {
                visited[i] = true;
                q.push(i);
                parent[i] = k;
            }
        }
    }
}
int32_t main()
{
    int n, m;
    cin >> n >> m;  
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int source, destination;
    cin >> source >> destination;
    //cout<<adj<<endl<<source<<endl<<destination;
    bfs(source);
    if (visited[destination])
    {
        vector<int> ans;
        ans.push_back(destination);
        int s = destination;

        while (parent[s] != -1)
        {
            ans.push_back(parent[s]);
            s= parent[s];
        }
        reverse(ans.begin(),ans.end());
        cout<<ans.size() - 1<<endl;
        for(auto i : ans)
        {
            cout<<i<<" ";
        }

    }
    else
    {
        cout<<-1;
    }
    
    return 0;
}
