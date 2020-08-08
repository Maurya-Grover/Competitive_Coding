// make every pair and check common topics
// always pick max topics and update max number
// of ways to form that accordingly
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    char mat[n][m];
    for (int i = 0; i < n; i++)
        cin >> mat[i];
    int maxTopics = 0, maxWaysToFormTeams = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int count = 0;
            for (int l = 0; l < m; l++)
            {
                if (mat[i][l] == '1' or mat[j][l] == '1')
                    // char data type hai not int
                    count++;
            }
            if (count > maxTopics)
            {
                maxTopics = count;
                maxWaysToFormTeams = 1;
            }
            else if (count == maxTopics)
                maxWaysToFormTeams++;
        }
    }
    cout << maxTopics << "\n"
         << maxWaysToFormTeams;
    return 0;
}
/*
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
*/