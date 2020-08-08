#include<bits/stdc++.h>
using namespace std;

vector<int> graph[10];
int adj[10][10];
int n,m,u,v,c;
int final[100];
int minCost = 10000;

bool check(int x,int path[]){
    for (int i = 0; i < n; i++)
    {
        if(path[i] == x){
            return false;
        }
    }
    return true;
}
void mindfs(int i,int cost,int path[],int pathLength){
    
  
    for (auto it:graph[i]){
        if(check(it,path)){
            
            path[pathLength] = it;
            cost = cost +adj[i][it];
            //cout<<it<<" "<<cost<<" "<<pathLength<<"\n";
            mindfs(it,cost,path,pathLength+1);
            if(pathLength == n-1){
                //cout<<"X\t"<<path[pathLength]<<"\n";
                if(graph[path[pathLength]][0] == 1){
                    cost = cost+ adj[path[pathLength]][0];
                    if(cost<minCost){
                        minCost = cost;
                        //cout<<"\t\t\t cost = "<<minCost<<"\n";
                    }
                }
                path[pathLength] = -1;     
            }
            else
            {
                path[pathLength]= -1;
                cost = cost - adj[it][i];
            }
            
        }
    }
    
    

}

int main(int argc, char const *argv[])
{
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>u>>v>>c;
        adj[u][v] = c;
        adj[v][u] = c;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int path[100];
    for (int i = 0; i < 100; i++)
    {
        path[i] = -1;
    }
    path[0] = 0;
    mindfs(0,0,path,1);
    cout<<minCost;
    return 0;
}
