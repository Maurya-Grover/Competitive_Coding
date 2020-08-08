// simply find the most frequent number and find the
// number of remaining elements
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int freq[101] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        freq[temp]++;
    }
    int max = 0;
    for (int i = 1; i <= 100; i++)
        if (freq[i] >= max)
            max = freq[i];
    cout << n - max;
    return 0;
}