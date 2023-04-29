#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    int n = intervals.size();
    if (n == 1)
        return intervals;
    sort(intervals.begin(), intervals.end());
    int first = intervals[0][0];
    int second = intervals[0][1];

    for (int i = 1; i < n; i++)
    {
        if (first >= intervals[i][0] || second >= intervals[i][0])
        {
            first = min(first, intervals[i][0]);
            second = max(second, intervals[i][1]);

            continue;
        }
        ans.push_back({first, second});
        first = intervals[i][0];
        second = intervals[i][1];
    }

    ans.push_back({first, second});
    return ans;
}
int main()
{

    vector<vector<int>> nums;
    vector<vector<int>> ans;
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

    ans = merge(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << nums[i][j];
        }
        cout << endl;
    }
    return 0;
}