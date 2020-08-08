#include <bits/stdc++.h>
using namespace std;
#define N 10
void dfs(int graph[][N], int vis[], int curr_node)
{
    vis[curr_node] = 1;
    for(int j =0;j<N;j++)
    {
        if (graph[curr_node][j] == 1 && !vis[j])
        {
            dfs(graph,vis,j);
        }
        
    }
}
int main()
{

    return 0;
}