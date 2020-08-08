#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    if (k >= n)
        k = n - 1;
    vi arr(100001), index(100001);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        index[arr[i]] = i;
        
    }
    int i = 1;
    while (k-- and i <= n)
    {
        // so now n - i is the ith largest element
        if (arr[i] == n - i + 1)
            continue;
        // ith largest already in correct place
        // so just skip swapping
        // if ith largest not in correct place then perform swap
        int temp = index[n - i + 1];
        swap(arr[i], arr[index[n + 1 - i]]);
        index[arr[temp]] = temp;
        index[arr[i]] = i;
        k--;
        i++;
    }
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    return 0;
}