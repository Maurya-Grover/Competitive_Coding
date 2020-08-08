#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[3][100];
int mincost = 10000;
void min_cost(vector<int> test)
{   
    /*for(auto it: test)
    {
        cout << it << " ";
    }*/
    int cost = 0;
    for(int j=0;j<test.size()-1;j++)
    {
        for(int i = 0;i < m;i++)
        {
        if((a[0][i]==test[j]&&a[1][i]==test[j+1])||(a[0][i]==test[j+1]&&a[1][i]==test[j]))
            cost = cost + a[2][i];
        }
    }
    //cout << "cost:" << cost << "\n";
    mincost = min(mincost,cost);
}
bool check_edge(int x,int y)
{
    for(int i = 0;i < m;i++)
    {
        if((a[0][i]==x&&a[1][i]==y)||(a[0][i]==y&&a[1][i]==x))
        return true;
    }
    return false;
}
bool check_hamiltonian(vector<int> test)
{
    for(int i=0;i<test.size()-1;i++)
    {
        if(!check_edge(test[i],test[i+1]))
        {
            return false;
        }
    }
    return true;
}
/*void display(vector<int> test)
{
    for(auto it: test)
    {
        cout << it << " ";
    }
    cout << "\n";
}*/
int main()
{
    cin >> n >> m;
    int path[n-1];
    for(int i=0;i<m;i++)
    {
        cin >> a[0][i] >> a[1][i] >> a[2][i];
    }
    for(int i=0;i<n-1;i++)
    {
        path[i]=i+1;
    }
    sort(path,path+(n-1));
    do{
        vector<int> test;
        test.push_back(0);
        for(int i=0;i<n-1;i++)
        test.push_back(path[i]);
        test.push_back(0);
        if(check_hamiltonian(test)){
            min_cost(test);
        }
    }while(next_permutation(path,path+n-1));
    cout << mincost;
}