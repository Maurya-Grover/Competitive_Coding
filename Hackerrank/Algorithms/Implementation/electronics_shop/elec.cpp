
/*
sort 1 in descending order and other in ascending order
this gives the direction we must move in to find the sum.
if sum > than budget we don't need to check other higher values of usb
for given kb price
*/
#include <bits/stdc++.h>
using namespace std;
int n, m, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> b >> n >> m;
    int kb[n], usb[m];
    for (int i = 0; i < n; i++)
        cin >> kb[i];
    for (int i = 0; i < m; i++)
        cin >> usb[i];
    sort(kb, kb + n, greater<int>());
    sort(usb, usb + m);
    int max = -1;
    for (int i = 0, j = 0; i < n; i++)
        for (; j < m; j++)
        {
            int t = kb[i] + usb[j];
            if(t > b) break;
            if (t > max)
                max = t;
        }
    cout << max;
}
/*
for (int i = 0; i < n; i++)
    cout << kb[i] << " ";
cout << "\n";
for (int i = 0; i < m; i++)
    cout << usb[i] << " ";
*/