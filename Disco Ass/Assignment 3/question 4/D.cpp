#include<bits/stdc++.h>
using namespace std;

vector<int> graph[100];
int adj[100][100],arr[100];
int n,u,v,w,q,x;
char ch;

void dfs(int i,int x,int cost){
    
    if(i == x){
        arr[x] = cost;
        return;
    }
    for(auto it:graph[i]){
        dfs(it,x,cost+adj[i][it]);
    }
}


int main(int argc, char const *argv[])
{
    int a = 1;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        
        cin>>u>>v>>ch;
        if(ch == 'L')
        {
            a = -1;
        }
        graph[u].push_back(v);
        // graph[v].push_back(u);
        adj[u][v] = a;
        adj[v][u] = a;
        a = 1;
    }
    for (int i = 0; i < n; i++)
    {
        dfs(0,i,0);
    }
    
    cin>>q;
    int flag;
    for (int i = 0; i < q; i++)
    {   
        flag = 0;
        cin>>x;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == x){
                flag = 1;
                cout<<i<<" ";
            }
        }
        if(flag == 0){
            cout<<"No Nodes";
        }
        cout<<"\n";
    }
    
    
    return 0;
}
  


/*

7
0 1 L
1 3 L
1 2 R
0 4 R
4 5 L
4 6 R
4
0
1
3
-1

*/