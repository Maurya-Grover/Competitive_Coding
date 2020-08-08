#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int n, no_of_moves = -1, jumpa, jumpb;

void reachingPossible(int a, int b, int jumps)
{
    if (a == n - 1 and b == n - 1)
    {
        no_of_moves = jumps;
        return;
    }
    else if (a <= n - 1 and b <= n - 1)
    {
        jumps++;
        reachingPossible(a + jumpa, b + jumpb, jumps);
    }
    else if (a > n - 1 or b > n - 1)
        return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    jumpa = 1;
    jumpb = 2;
    reachingPossible(0, 0, 0);
    cout << no_of_moves;
    /*
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            jumpa = i;
            jumpb = j;
            no_of_moves = -1;
            reachingPossible(0, 0, 0);
            cout << no_of_moves << " ";
        }
        newline;
    }
*/
    return 0;
}