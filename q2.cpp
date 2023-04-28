#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
    int l = 0, r = height.size() - 1;
    int ans = 0, w, area;
    while (l < r)
    {
        w = r - l;
        area = min(height[l], height[r]) * w;
        ans = max(ans, area);
        if (height[l] < height[r])
            l++;
        else if (height[r] < height[l])
            r--;
        else
        {
            l++;
            r--;
        }
    }
    return ans;
}
int main()
{

    vector<int> nums;
    int size_of_array, value;
    cout << "enter size of array: ";
    cin >> size_of_array;
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> value;
        nums.push_back(value);
    }

    cout << maxArea(nums);
    return 0;
}