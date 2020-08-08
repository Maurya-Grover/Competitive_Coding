#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n, array_sum = 0;
        cin >> n;
        int a[n];
        if (n > 2)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
                array_sum = array_sum + a[i];
            }
            bool elementFound = false;
            int left_sum = 0, right_sum;
            for (int i = 1; i < n; i++)
            {
                left_sum = left_sum + a[i - 1];
                right_sum = array_sum - (a[i] + left_sum);
                if (left_sum == right_sum)
                {
                    cout << "YES";
                    elementFound = true;
                    break;
                }
            }
            if ((array_sum - a[0]) == 0)
            {
                cout << "YES";
                elementFound = true;
            }
            if (!elementFound)
                cout << "NO";
        }
        else if (n == 1)
        {
            cin >> a[0];
            cout << "YES";
        }
        else if (n == 2)
        {
            cin >> a[0] >> a[1];
            if (a[0] == 0)
                cout << "YES";
            else
                cout << "NO";
        }
        newline;
    }
    return 0;
}