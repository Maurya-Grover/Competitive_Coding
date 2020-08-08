#include<bits/stdc++.h>
using namespace std;
#define int long long 

const int N = 26;
vector<char> adj[N];
bool visited[N] = {false};
string answer;

void dfs(int s)
{
    if(visited[s])
    {
        return;
    }
    visited[s] = true;
    char ch = s + 'A';
    answer.push_back(ch);
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
    int n,m;
    cin>>n>>m;
    for(int i =0;i<m;i++)
    {
        char x,y;
        cin>>x>>y;
        adj[x-'A'].push_back(y-'A');
        adj[y-'A'].push_back(x-'A');
    }
    vector<string> ans;
    for(int i =0;i<m;i++)
    {
        if(!visited[i])
        {
            dfs(i);
            ans.push_back(answer);
            answer = "";
        }
    }
    cout<<ans.size()<<endl;
    for(auto it : ans)
    {
        sort(it.begin(), it.end());
        cout<<it<<endl;
    }
    return 0;
}
