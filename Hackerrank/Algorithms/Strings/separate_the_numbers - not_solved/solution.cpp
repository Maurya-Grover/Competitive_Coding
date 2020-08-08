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
        getline(cin, input);
        int n = input.size(), curNumber = 0;
        vi numbers;
        input.push_back('0');
        int i;
        for (i = 0; i < n - 1; i++)
        {
            curNumber = curNumber + (int)(input[i] - '0');
            if (input[i] >= input[i + 1])
            {
                curNumber = curNumber * 10 + (int)(input[i + 1] - '0');
                i++;
            }
            numbers.push_back(curNumber);
            curNumber = 0;
        }
        for (int i = 0; i < numbers.size(); i++)
            cout << numbers[i] << " ";
    }
    return 0;
}