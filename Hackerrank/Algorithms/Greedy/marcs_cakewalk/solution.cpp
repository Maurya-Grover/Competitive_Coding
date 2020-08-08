#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int calorie[n];
    for (int i = 0; i < n; i++)
        cin >> calorie[i];
    sort(calorie, calorie + n);
    long long int result = 0;
    for (int i = 0; i < n; i++)
        result += (calorie[i] * pow(2, n - 1 - i));
    cout << result;
    return 0;
}