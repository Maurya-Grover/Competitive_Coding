#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

bool board[10][10] = {{false}};
int n;

bool isSafe(int row, int col)
{
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;
    for (int i = row, j = col; i >= 0 and j >= 0; i--, j--)
        if (board[i][j])
            return false;
    for (int i = row, j = col; j >= 0 and i <= n; i++, j--)
        if (board[i][j])
            return false;
    return true;
}

bool generateQueens(int col)
{
    // if all queens have been placed
    if (col >= n)
        return true;
    // try to place queens in every row
    for (int i = 0; i < n; i++)
    {
        if (isSafe(i, col))
        {
            board[i][col] = true;
            if (generateQueens(col + 1))
                return true;
            board[i][col] = false;
        } // if placing the queen at i ,col doesn't lead to a solution
    }
    return false; // if no solution exists
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    if (not generateQueens(0))
    {
        cout << "Not possible";
        return 0;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
            cout << board[i][j] << " ";
        newline;
    }
    return 0;
}