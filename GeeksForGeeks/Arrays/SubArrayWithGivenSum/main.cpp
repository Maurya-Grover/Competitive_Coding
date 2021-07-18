#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

void subArraySumBrute(vll &a, int size, int sum)
{
    vll prefixSum(size);
    bool solved = false;
    prefixSum[1] = a[1];
    for (int i = 1; i < size; i++)
        prefixSum[i] = prefixSum[i - 1] + a[i];
    for (int i = 1; i < size; i++)
        if (prefixSum[i] == sum)
        {
            cout << "1 " << i;
            return;
        }
    for (int i = 1; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if ((prefixSum[j] - prefixSum[i]) == sum)
            {
                cout << i + 1 << " " << j;
                return;
            }
    cout << "-1";
}

void subArraySum(vll &a, int size, int sum)
{
    int i = 1, j = 1;
    ll cur_sum = 0;
    while (i < size || j < size)
    {
        if (cur_sum == sum)
        {
            cout << i << " " << j - 1;
            return;
        }
        else if (cur_sum > sum)
        {
            cur_sum -= a[i];
            i++;
        }
        else
        {
            if (i == size)
                break;
            cur_sum += a[j];
            j++;
        }
    }
    cout << "-1";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum;
        cin >> n >> sum;
        vll a(n + 1);
        rep(i, 1, n + 1) cin >> a[i];
        subArraySum(a, n + 1, sum);
        newline;
    }
    return 0;
}