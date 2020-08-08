// string length even number called even string and odd length is odd string
// either of the operations converts odd to even or even to odd string
//therefore, "abcde" cannot be changed to "abcdf" in 3 moves
// to change one string to another we need find no of operations needed
// therefore if d operations are needed, then moves >= d and parity of d and moves
// must be same
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // s and t contain lowercase letters
    string s, t;
    int k;
    getline(cin, s);
    getline(cin, t);
    cin >> k;
    int n1 = s.length(), n2 = t.length(), theOneAfterLastCommon;
    for (theOneAfterLastCommon = 0; theOneAfterLastCommon < min(n1, n2); theOneAfterLastCommon++)
    {
        if (s[theOneAfterLastCommon] != t[theOneAfterLastCommon])
            break;
    }
    int diff = n1 + n2 - 2 * theOneAfterLastCommon;
    // diff is number of characters left to change after removing the common characters from both collectively
    if (k > (n1 + n2) || (k >= diff and (k - diff) % 2 == 0))
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";
    //cout << s[theOneAfterLastCommon];
    return 0;
}