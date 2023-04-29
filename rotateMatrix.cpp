#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
      
        for(int i=0;i<n-1;i++)
        {
            for(int j=i;j<m-1;j++)
            {
                swap(matrix[i][j+1],matrix[j+1][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
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

    rotate(nums);
    cout<<"/n Rotated Matrix:";;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<<nums[i][j];
        }
        cout<<endl;
    }

}