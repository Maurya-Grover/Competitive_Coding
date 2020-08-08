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
    string s;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (q--)
    {
        getline(cin, s);
        int n = s.size(), diffForward[n - 1], diffReverse[n - 1];
        for (int i = 0; i < n - 1; i++)
            diffForward[i] = abs((int)s[i] - s[i + 1]);
        for (int i = 0; i < (n / 2); i++)
            swap(s[i], s[n - 1 - i]);
        for (int i = 0; i < n - 1; i++)
            diffReverse[i] = abs((int)s[i] - s[i + 1]);
        bool isFunny = true;
        for (int i = 0; i < n - 1; i++)
            if (diffReverse[i] != diffForward[i])
                isFunny = false;
        if (isFunny)
            cout << "Funny";
        else
            cout << "Not Funny";
        newline;
    }
    return 0;
}