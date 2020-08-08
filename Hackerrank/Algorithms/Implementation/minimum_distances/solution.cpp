#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int minDist = 1001;
    bool duplicateFound = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                if (arr[j] == arr[i])
                {
                    duplicateFound = true;
                    if (abs(j - i) < minDist)
                        minDist = abs(j - i);
                }
            }
        }
    }
    if (duplicateFound)
        cout << minDist;
    else
        cout << "-1";
    return 0;
}