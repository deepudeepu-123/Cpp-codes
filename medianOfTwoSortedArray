#include <bits/stdc++.h>
using namespace std;
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        double d;
        int a=nums1.size();
        if(a%2!=0)
            d=nums1[a/2];
        else
        {
            a=a/2;
            d=(nums1[a]+nums1[a-1])/2.0;
        }
        return d;
    }
int main()
{
    
    vector<int> nums1,nums2;
    int size_of_array1,size_of_array2, value;
    cout << "enter size of array1: ";
    cin >> size_of_array1;
    cout << "enter size of array2: ";
    cin >> size_of_array2;
    for (int i = 0; i < size_of_array1; i++)
    {
        cin >> value;
        nums1.push_back(value);
    }

for (int i = 0; i < size_of_array2; i++)
    {
        cin >> value;
        nums2.push_back(value);
    }
    cout << findMedianSortedArrays(nums1,nums2);
    return 0;
}
