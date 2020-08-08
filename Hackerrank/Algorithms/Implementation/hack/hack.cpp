#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b, a%b);
}


ll lcm(int a[],int n)
{
	ll ans=a[0];
	for (int i = 1; i <n; i++)
		{
			ans=((a[i]*ans)/gcd(a[i],ans));
		}
	return ans;
}

int gcdarray(int a[],int n)
{
	int ans = a[0];
	for(int i=0;i<n;i++)
		{
			ans=gcd(ans,a[i]);
		}

	return ans;
}

int main() 
{
    int n;
    int m;
    cin >> n >> m;
    int a[n],b[m];
    for (int i = 0; i < n; i++)
    {
    	cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
    	cin>>b[i];
    }

    int f=lcm(a,n);
    int l=gcdarray(b,m);
    int count=0;
    for(int i=f;i<=l;i+=f)
    {
    	if(l%i==0)
    		count++;

    }
    cout<<count;
    
    return 0;
}
