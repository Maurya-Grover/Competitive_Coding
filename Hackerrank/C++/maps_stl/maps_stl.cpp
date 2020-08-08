#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    set<int> s;
    map<string, int> name_marks;
    while (q--)
    {
        int y, x;
        cin >> y >> x;
        switch (y)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            s.erase(x);
            break;
        case 3:
            set<int>::iterator it = s.find(x);
            if (it == s.end())
                cout << "Yes";
            else
                cout << "No";
            newline;
            break;
        }
    }
    return 0;
}