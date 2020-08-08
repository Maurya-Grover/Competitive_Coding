// if sum of 2 numbers is divisible by k, if one number gives remainder
// i then other will give k-i. simply store frequencies of all numbers
// and loop through all the remainders pick the max of each pair since
// we want the biggest subset. the subset must have either f[i] or f[k-i]
// for each i and 2 numbers with  remainder 0 cannot be included neither
// can 2 numbers with remainder k/2 if k is even

#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int freq[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;    
        freq[temp % k]++;
    }
    int subsetSize = 0;
    for (int i = 0; i <= k / 2; i++) // only till k/2 cause after k/2 i will be
    // equal to k-i that was before i == k/2
    {
        if (i == 0 || (i == k / 2 and k % 2 == 0))
            // add atleast one number with remainder 0 and remainder k/2
            subsetSize += (freq[i] > 0); // this adds 1 if there are numbers with remainder 0 or k/2
            // since the loop runs between [0,k/2] hence one value will be considered
        else
        {
            if (freq[i] > freq[k - i])
                subsetSize += freq[i];
            else
                subsetSize += freq[k - i];
        }
    }
    cout << subsetSize;
    return 0;
}