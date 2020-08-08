#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, s;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> s;
        int ans;
        ans = ((m % n) + s - 1) % n;
        if(ans)
            cout << ans;
        else
            cout << n;
        newline;
    }
    return 0;
}
/*
        if (n > (s + m))
        {
            // case where starting chair(s) + number of sweets(m) is less than number of people
            //cout << s + m;
        }
        else if ((s + m) > n)
        {
            while (m)
            {
                if (s <= n - 1)
                    s++;
                else if (s == n - 1)
                    s = 1;
                m--;
            }
        }
        cout << ++s;
        */