#include<bits/stdc++.h>
using namespace std;
vector <int> adj[1000];
int u,v;
bool flag = false;
bool final = false;
int height=0;
int visited[1000];
set <int> path;
set <int> ans;
vector <int> track;
void dfs(int node,int length)
{
    path.insert(node);
  //  visited[node]=1;
    if(node==v)
    {
        flag=true;
        height = max(height,length);
    }
    for(int i = 0;i<adj[node].size();i++)
    {
        if(path.find(adj[node][i])==path.end())
        {
            dfs(adj[node][i],length+1);
        }
    }
    path.erase(node);
}
void dfs1(int node,int lenght)
{
    ans.insert(node);
    if(node == v && lenght == height)
    {
        final = true;
        //track.push_back(node);
        return;
    }
    for(int i = 0;i < adj[node].size();i++)
    {
        if(ans.find(adj[node][i])==ans.end())
        {
            dfs1(adj[node][i],lenght+1);
            if(final)
            {
                track.push_back(adj[node][i]);
                return;
            }
        }
    }
    ans.erase(node);
}
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin >> u >> v;
    dfs(u,0);
    dfs1(u,0);
    track.push_back(u);
    reverse(track.begin(),track.end());
    for(auto it:track)
    {
        cout << it << " ";
    }
    cout << height;
}