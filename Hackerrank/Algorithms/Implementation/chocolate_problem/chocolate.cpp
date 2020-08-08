#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, m;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    //cout<<s[0];
    cin >> d >> m;
    int sum = 0, count = 0;
    for (int i = 0; i < m; i++)
    {
        sum = sum + s[i];
    }
    //cout<<sum;

    for (int i = m, k = 0; i <= n; i++, k++)
    {
        if (sum == d)
            count++;

        sum = sum + s[i];
        sum = sum - s[k];
    }

    std::cout << count;

    return 0;
}