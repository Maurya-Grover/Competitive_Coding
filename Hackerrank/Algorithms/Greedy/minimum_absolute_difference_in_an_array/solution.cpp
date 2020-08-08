// simply sort and find adjacent diff as we 
// move further the diff will only increase 
// between non-adjacent elements
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
    int n, temp;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    int minDiff = INT_MAX;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
        if (abs(arr[i] - arr[i + 1] < minDiff))
            minDiff = abs(arr[i] - arr[i + 1]);
    cout << minDiff;
    return 0;
}