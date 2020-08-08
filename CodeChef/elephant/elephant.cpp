#include<bits/stdc++.h>
using namespace std;
int t,n,c;
int main()
{
    cin>>t;
    while(t)
    {
        cin>>n>>c;
        int arr[n+1];
        int runSum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            runSum += arr[i];
        }
        if(runSum > c)
        {
            cout<<"No"<<endl;
        }        
        else 
            cout<<"Yes"<<endl;
        t--;
    }
    return 0;
}