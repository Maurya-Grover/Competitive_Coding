#include <bits/stdc++.h>
using namespace std;
#define pb push_back

const int MAX = 1001;

int n, x;
vector<int> adj[MAX];
int level[MAX];
bool visited[MAX] = {false};
int parent[MAX] = {0};

void bfs(int s)
{
    parent[s] = -1;    // source has no parent
    visited[s] = true; // source will always get visited
    level[s] = 0;      // level of source is zero
    queue<int> q;
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
                parent[i] = k; // k essentially contains the parent of i
            }
        }
    }
}

int main()
{
    cin >> n;
    int q = n - 1;
    while (q)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
        q--;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    //bfs(1);
    cin >> x;
    /*int count = 0; 
    for (int i = 1; i < n; i++)
    {
        if (level[i] == x)
        {
            count++;
        }
        cout<<level[i];
    }*/
    cout << x;

    return 0;
}