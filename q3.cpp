#include <bits/stdc++.h>
using namespace std;
vector<string> findRelativeRanks(vector<int> &score)
{
    map<int, int> temp;
    for (int i = 0; i < score.size(); i++)
    {
        temp[score[i]] = i;
    }
    vector<string> ans(score.size(), "");
    sort(score.begin(), score.end(), greater<int>());
    for (int i = 0; i < score.size(); i++)
    {
        if (i + 1 == 1)
        {
            ans[temp[score[i]]] = "Gold Medal";
        }
        else if (i + 1 == 2)
        {
            ans[temp[score[i]]] = "Silver Medal";
        }
        else if (i + 1 == 3)
        {
            ans[temp[score[i]]] = "Bronze Medal";
        }
        else
        {
            ans[temp[score[i]]] = to_string(i + 1);
        }
    }
    return ans;
}
int main()
{

    vector<int> nums;
    vector<string> ans;
    int size_of_array;
    int value;
    cout << "enter the size of array: ";
    cin >> size_of_array;

    for (int i = 0; i < size_of_array; i++)
    {
        cin >> value;
        nums.push_back(value);
    }
    ans = findRelativeRanks(nums);

    return 0;
}