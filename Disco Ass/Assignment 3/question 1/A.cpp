#include<bits/stdc++.h>
using namespace std;
int vis[3];
int state=0;
vector <int> adj[100];
int path[3][100];
bool flag1=false,flag2=false;
int input[100][2];
int ans[100];
void dfs1(int node,int prev,int ptr,int U)
{
    for(int i=0;i < adj[node].size();i++)
    {
        if(adj[node][i]!=prev and !flag1)
        {
            path[1][ptr]=adj[node][i];
            if(adj[node][i]==U)
            {
                flag1=true;
                path[1][ptr+1]=-1;
                for (int z = 0; z <= ptr; z++)
                {
                    cout<<path[1][z]<<" ";
                }cout<<endl;
                return;
            }
            dfs1(adj[node][i],node,ptr+1,U);
        }
    }

}
void dfs2(int node,int prev,int ptr,int V)
{
    for(int i=0;i < adj[node].size();i++)
    {
        if(adj[node][i]!=prev and !flag2)
        {
            path[2][ptr]=adj[node][i];
            if(adj[node][i]==V)
            {
                flag2=true;
                path[2][ptr+1]=-1;
                for (int z = 0; z <= ptr; z++)
                {
                    cout<<path[2][z]<<" ";
                }cout<<endl;
                
                return;
            }
            dfs2(adj[node][i],node,ptr+1,V);
        }
    }

}
int LCA(int U,int V)
{
        path[1][0]=0;
        path[2][0]=0;
        dfs1(0,0,1,U);
        dfs2(0,0,1,V);
        int i=0;
        while(path[1][i]==path[2][i])
        {
            i++;
        }
        return path[1][i-1];
    //    return 0;
}
int main()
{
    int E,i;
    cin >> E;
    for(i=0;i<E;i++)
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int Q;
    cin >> Q;

    for(i=0;i<Q;i++)
    {
        cin >> input[i][0] >> input[i][1];
        //ans[i]=LCA(U,V);

    }
    for(i=0;i<Q;i++)
    {
        flag1=false;
        flag2=false;
        ans[i]=LCA(input[i][0],input[i][1]);
    }
        for(i=0;i<Q;i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}