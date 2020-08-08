#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int t, hashmap[100] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        hashmap[t]++;
    }
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        t = (hashmap[i] + hashmap[i + 1]);
        if (t > maxsum)
            maxsum = t;
    }
    cout << maxsum << "\n";
}