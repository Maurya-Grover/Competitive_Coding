// simply print f-1(f-1(x))
// f-1(x) represents inverse function of f(x)
// this function has a one to one mapping
// range is same as codomain hence the inverse exists
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int p[n + 1], func1[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        func1[p[i]] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        cout << func1[func1[i]];
        newline;
    }
    return 0;
}