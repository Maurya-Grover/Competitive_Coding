#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // alternate approach
    for (int i = 0; i < n - 1; i++)
        if (a[i] != a[i + 1])
            // subtract number of smallest items from total
            cout << n - (i + 1) << "\n"; 
    /*
    approach 2
    sort(a, a + n);
    cout << n;
    newline;
    int i = 0;
    while (i < n)
    {
        int cur = a[i];
        while (a[i] == cur)
            i++;
        if (i != n)
        {
            cout << n - i;
            newline;
        }
    }*/
    return 0;
}
/*
approach 3
for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
bool done = false;
    while (not done)
    {
        int countSticks = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i])
                countSticks++;
        }
        cout << countSticks;
        newline;
        int min = a[0];
        // finding minimum('and' condtition imp as otherwise min will be 0)
        for (int i = 1; i < n; i++)
            if (a[i] < min and a[i] != 0)
                min = a[i];
        // deleting minimum
        for (int i = 0; i < n; i++)
            if (a[i])
                a[i] = a[i] - min;
        // find minimum again to test whether done('and' condtition imp as otherwise min will be 0)
        for (int i = 1; i < n; i++)
            if (a[i] < min and a[i] != 0)
                min = a[i];
        // check whether all sticks are either minimum i.e. equal or 0
        int count = 0;
        for (int i = 0; i < n; i++)
            if (a[i] == 0 or a[i] == min)
                count++;
        if (count == n)
        {
            done = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i])
                    countSticks++;
            }
            cout << countSticks;
            newline;
        }
    }
*/