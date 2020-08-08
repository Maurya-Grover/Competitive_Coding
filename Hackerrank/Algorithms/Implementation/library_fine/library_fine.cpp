// simply implement jo bola hai
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d1, d2, m1, m2, y1, y2, fine = 0;
    cin >> d1 >> m1 >> y1; // returned date
    cin >> d2 >> m2 >> y2; // expected date
    if (y1 > y2)
        fine = 10000;
    else if (y1 == y2)
    {
        if (m1 > m2)
            fine = 500 * (m1 - m2);
        else if (m1 == m2)
            if (d1 > d2)
                fine = 15 * (d1 - d2);
    }
    cout << fine;
    return 0;
}