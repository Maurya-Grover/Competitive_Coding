#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string line[n];
    int arr[n][n];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < n; i++)
    {
        getline(cin, line[i]);
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = line[i][j] - '0';
    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < n - 1; j++)
            if (arr[i][j] > arr[i + 1][j] and arr[i][j] > arr[i - 1][j] and arr[i][j] > arr[i][j + 1] and arr[i][j] > arr[i][j - 1])
                line[i][j] = 'X';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << line[i][j];
        newline;
    }
    return 0;
}
/*
// debug print statement
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        newline;
    }
    */