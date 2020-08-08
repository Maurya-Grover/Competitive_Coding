#include<bits/stdc++.h>
using namespace std;
int t,n,x,k,y;
int main()
{
    cin>>t;
    while(t)
    {
        cin>>x>>y>>k>>n;
        int pages,price;
        bool flag = false;
        for(int i =0;i<n;i++)
        {
            cin>>pages>>price;
            if(pages>=x-y and price<=k)
            {
                flag = true;
                break;                
            }
            
        }
        flag?cout<<"LuckyChef"<<" ":cout<<"UnluckyChef"<<" ";
        t--;
    }
    return 0;
}