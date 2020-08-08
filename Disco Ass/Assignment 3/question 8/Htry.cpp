#include<bits/stdc++.h>
using namespace std;
int N,M,P,Q;
int g1[2][100],g2[2][100];
void display(int v2[])
{
    for(int i=0;i<P;i++)
    {
        cout << i << "-" << v2[i] << "\n";
    }
}
bool check_edge_present(int a,int b)
{
    for(int i=0;i<Q;i++)
    {
        if((a==g2[0][i]&&b==g2[1][i])||(a==g2[1][i])&&b==g2[0][i])
        return true;
    }
    return false;
}
bool check_edge(int v2[])
{
    for(int i=0;i<M;i++)
    {
        if(!check_edge_present(v2[g1[0][i]],v2[g1[1][i]]))
        return false;
    }
    return true;
}
bool check_iso(int v2[])
{
    do{
        if(check_edge(v2))
            {
                return true;
            }
    }while(next_permutation(v2,v2+P));
    return false;
}
int main()
{
    cin >> N >> M;
    for(int i=0;i<M;i++)
    {
        cin >> g1[0][i] >> g1[1][i];
    }
    cin >> P >> Q;
    for(int i=0;i<Q;i++)
    {
        cin >> g2[0][i] >> g2[1][i];
    }
    if(P!=N)
    {
        cout << "NO";
    }
    else
    {
        int v2[P];
        for(int i=0;i<N;i++)
        {
            v2[i]=i;
        }
        if(check_iso(v2))
            display(v2);
        else
        {
            cout << "NO";
        }
        
    }
    
}