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
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (q--)
    {
        string input;
        cin >> input;
        int noOfOperation = 0;
        int n = input.size();
        for (int i = 0; i < (n / 2); i++)
        {
            if (input[i] != input[(n - 1 - i)])
            {
                int curDiff = abs((int)(input[i] - input[(n - 1 - i)]));
                noOfOperation += curDiff;   
            }
        }
        cout << noOfOperation;
        newline;
    }
    return 0;
}