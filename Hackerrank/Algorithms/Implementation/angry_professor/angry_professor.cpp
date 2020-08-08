#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        int stud = n, count = 0;
        while (stud)
        {
            int time;
            cin >> time;
            if (time <= 0)
                count++;
            stud--;
        }
        if (count < k)
        {
            cout << "YES"; //print yes if class is cancelled
            newline;
        }
        else
        {
            cout << "NO";
            newline;
        }
        t--;
    }
    return 0;
}