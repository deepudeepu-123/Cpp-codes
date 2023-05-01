#include<bits/stdc++.h>
using namespace std;
 int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            ans+=nums[i];

        }
        return ans;
    }
    int main()
{

    vector<int> nums;
   int ans;
    int size_of_array;
    int value;
    cout << "enter the size of array: ";
    cin >> size_of_array;

    for (int i = 0; i < size_of_array; i++)
    {
        cin >> value;
        nums.push_back(value);
    }
    ans = arrayPairSum(nums);

    return 0;
}