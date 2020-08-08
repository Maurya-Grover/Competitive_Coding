#include<bits/stdc++.h>
using namespace std;
bool flag = false;
void display(int node,int parent[])
{
    int i=node;
    vector<int> path;
    path.push_back(node);
    while(parent[i]!=-1)
    {
        i = parent[i];
        path.push_back(i);
    }
    reverse(path.begin(),path.end());
    for(auto it:path)
    {
        cout << it << " ";
    }
    cout << "\n";
}
int main()
{
    int n,X;
    vector<int> ans;
    cin >> n;

    int parent[n],leaf[n],sum[n];
    leaf[0]=0;
    parent[0]=-1;
    for(int i=1;i<n;i++)
    {
        cin >> parent[i];
        leaf[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin >> sum[i];
    }
    cin >> X;
    queue<int> q;
    q.push(0);
    while (!q.empty())
    {
        //cout << "a";
        int x=q.front();
        q.pop();
        int f = 0;
        for(int i=1;i<n;i++)
        {
            if(x==parent[i])
            {
                q.push(i);
                sum[i]=sum[i]+sum[x];
                f = 1;
            //    cout << "node:" << x << " " << sum[i] << "\n";
            }
        }
        if(!f)
        {
            leaf[x]=1;
        }
    }
    for(int i = 1 ;i < n;i++)
    {
        if(leaf[i]&&sum[i]==X)
        {
            ans.push_back(i);
        }
    }
    for(auto it:ans)
    {
        display(it,parent);
    }
}