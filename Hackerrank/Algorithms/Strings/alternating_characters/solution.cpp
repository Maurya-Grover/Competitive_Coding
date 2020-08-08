#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    string input;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (q--)
    {
        cin >> input;
        int i = 0, n = input.size(), noOfDeletions = 0;
        while (i < n - 1)
        {
            if (input[i] == input[i + 1])
                noOfDeletions++;
            i++;
        }
        cout << noOfDeletions;
        newline;
    }
    return 0;
}