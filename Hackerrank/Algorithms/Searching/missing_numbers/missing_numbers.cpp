#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;    
    int temp;
    int hashMapa[10001] = {0};
    int hashMapb[10001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        hashMapa[temp]++;
    } // array with missing numbers
    cin >> m;    
    vector<int> result;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        hashMapb[temp]++;
    } // original array
    for (int i = 0; i <= 10001; i++)
    {
        if (hashMapa[i] < hashMapb[i])        
            result.push_back(i);
        
    }
    for (vector<int>::iterator it = result.begin(); it != result.end(); it++)
        cout << *it << " ";
    return 0;
}