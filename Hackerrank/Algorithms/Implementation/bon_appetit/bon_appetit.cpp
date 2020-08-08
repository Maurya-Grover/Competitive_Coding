#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, b, sum = 0;
    cin >> n >> k;
    int bill[n];
    for (int i = 0; i < n; i++)
    {
        cin >> bill[i];
        if (k != i)
        {
            sum = sum + bill[i];
        }
    }
    sum = sum / 2;
    cin >> b;
    if (sum == b)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << b - sum;
    }
    return 0;
}