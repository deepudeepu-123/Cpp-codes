#include <bits/stdc++.h>
using namespace std;
int numEnclaves(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    map<pair<int, int>, int> vis;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            vis[{i, j}] = 0;
    }
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});
                    vis[{i, j}] = 1;
                }
            }
        }
    }
    int r[] = {0, 0, -1, +1};
    int c[] = {-1, +1, 0, 0};
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ro = row + r[i];
            int co = col + c[i];
            if (ro >= 0 && ro < n && co >= 0 && co < m && vis[{ro, co}] == 0 && grid[ro][co] == 1)
            {
                q.push({ro, co});
                vis[{ro, co}] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && vis[{i, j}] == 0)
                cnt++;
        }
    }
    return cnt;
}
int main()
{

    vector<vector<int>> nums;
    int row, col, value;
    cout << "enter the row: ";
    cin >> row;
    cout << "enter the col: ";
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> value;
            nums[i].push_back(value);
        }
    }

    cout << numEnclaves(nums);
    return 0;
}