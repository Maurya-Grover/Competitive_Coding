// simply reverse number and compare
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int start, end, divisor, count = 0;
    cin >> start >> end >> divisor;
    for (int i = start; i <= end; i++)
    {
        int curNum = i, rev = 0;
        while (curNum)
        {
            rev = rev * 10 + curNum % 10;
            curNum /= 10;
        }
        if (abs(i - rev) % divisor == 0)
            count++;
        // debug print cout << rev << " ";
    }
    cout << count;
    return 0;
}