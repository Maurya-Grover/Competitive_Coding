#include <bits/stdc++.h>

using namespace std;
#define int long long

const int N = 2e3 + 5;
vector<int> adj[N];
bool visited[N] = {false};
int parent[N] = {0};

void dfs(int s)
{
    if(visited[s])
    {
        return;
    }
    visited[s] = true;
    for(auto i : adj[s])
    {
        if(!visited[i])
        {
            dfs(i);
        }
    }

}

int32_t main()
{
    int n, m, p;
    cin >> n >> m >> p;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int arr[p + 1];
    for (int i = 1; i < p+1; i++)
    {
        cin>>arr[i];
        if(!visited[arr[i]])
        {
            dfs(arr[i]);
        }
    }

    vector<int> ans;
    for (int i = 1; i < n+1; i++)
    {
        if(!visited[i])
        {
            ans.push_back(i);
        }
    }
    if(ans.size() == 0)
    {
        cout<<"Black Out";
    }
    else
    {
        cout << ans.size() << endl;
        for(auto i : ans)
        {
            cout << i << " ";
        }
    }
    

}
