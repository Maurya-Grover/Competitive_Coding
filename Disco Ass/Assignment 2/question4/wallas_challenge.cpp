#include <bits/stdc++.h>
using namespace std;

int n, xa, xb, ya, yb;
set<pair<int, int>> s;
bool flag = false;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};
vector<pair<int, int>> ans;

bool check(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < n)
        return true;
    return false;
}

void dfs(int x, int y, int state)
{
    s.insert({x, y});
    if (x == xb && y == yb and state == n * n)
    {
        flag = true;
        ans.push_back({x, y});
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (check(nx, ny) and s.find({nx, ny}) == s.end())
        {
            dfs(nx, ny, state + 1);
            if (flag)
            {
                ans.push_back({x, y});
                return;
            }
        }
    }
    s.erase({x, y});
}

int main()
{
    cin >> n >> xa >> ya >> xb >> yb;
    dfs(xa, ya, 1);
    if (flag)
    {
        cout << "Yes\n";
        reverse(ans.begin(), ans.end());
    }
    else
        cout << "No";
    return 0;
}