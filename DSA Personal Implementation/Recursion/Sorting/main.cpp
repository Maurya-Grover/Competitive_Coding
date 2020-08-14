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

int merge(vi &a, int low, int high, int mid)
{
    int n1 = mid + 1 - low;
    int n2 = high - mid;
    vi left(n1), right(n2);
    for (int i = 0; i < n1; i++)
        left[i] = a[low + i];
    for (int i = 0; i < n2; i++)
        right[i] = a[mid + 1 + i];
    int i = 0, j = 0, k = low;
    while (i < n1 and j < n2)
    {
        if (left[i] <= right[j])
            a[k] = left[i++];
        else
            a[k] = right[j++];
        k++;
    }

    while (i < n1)
        a[k++] = left[i++];
    while (j < n2)
        a[k++] = right[j++];
}

void mergeSort(vi &a, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, high, mid);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    mergeSort(a, 0, n);
    newline;
    rep(i, 0, n) cout << a[i] << " ";
    return 0;
}