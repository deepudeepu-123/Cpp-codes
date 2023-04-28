#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int count = 1, ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            continue;
        if (nums[i] + 1 == nums[i + 1])
        {
            count++;
            if (ans < count)
                ans = count;
        }
        else
            count = 1;
    }
    return ans;
}
int main()
{
    cout << "enter: ";
    vector<int> nums;
    int size_of_array, value;
    cout << "enter size of array: ";
    cin >> size_of_array;
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> value;
        nums.push_back(value);
    }

    cout << longestConsecutive(nums);
    return 0;
}
