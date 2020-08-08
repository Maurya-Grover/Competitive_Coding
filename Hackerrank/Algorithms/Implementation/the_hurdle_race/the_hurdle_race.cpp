/*
simply find the max and if greater than max jump capacity print difference
else print 0*/ 
#include <bits/stdc++.h>
using namespace std;
int n, k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    int height;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> height;
        if (height > max)
            max = height;
    }
    /*
    debug print
    for(int i = 0; i < n; i++)
        cout<<height[i]<<" ";
    */
    //cout << "\n";
    if (max > k)
        cout << max - k;
    else
        cout << "0";
    return 0;
}