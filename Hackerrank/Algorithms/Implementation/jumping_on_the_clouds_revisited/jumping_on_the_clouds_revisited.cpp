// just do what is mentioned in problem desciption
// and zyaada dimaag mat lagao sab describe kiya hai
// seedhe seedhe solve karo bina smart bane
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int c[n];
    // description of content of c[n]
    // 0 cumulus cloud - flat bases puffy, cotton-like clouds
    // 1 thunderhead cloud - dense vertical towering clouds formed from water vapour
    for (int i = 0; i < n; i++)
        cin >> c[i];
    int energy = 100, curPos = 0;
    bool reached = false;
    while (!reached)
    {
        energy--;
        curPos = (curPos + k) % n;
        if (curPos == 0)
            reached = true;
        if (c[curPos])
            energy = energy - 2;
    }
    cout << energy;
    return 0;
}