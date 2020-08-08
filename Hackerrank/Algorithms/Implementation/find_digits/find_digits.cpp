//simply pick lastdigit of each number and check divisibility
// keep adding to the counter with each number that satisfies the condition
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int curNum = n, count = 0;

        while (n)
        {
            int lastDigit = n % 10;
            if (lastDigit)
                if (curNum % lastDigit == 0)
                    count++;
            n = n / 10;
            //cout << lastDigit << " ";
        }
        cout << count;
        newline;
    }
    return 0;
}