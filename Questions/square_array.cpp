#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> squared_arr;
        int l = 0, r = nums.size() - 1;
        while(l <= r)
        {
            int left = nums[l] * nums[l], right = nums[r] * nums[r];
            if (left >= right)
            {
                squared_arr.push_back(left);
                l++;
            }
            else
            {
                squared_arr.push_back(right);
                r--;
            }

        }
        reverse(squared_arr.begin(),squared_arr.end());

        return squared_arr;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = obj.sortedSquares(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << result[i] << "\n";
    }
    return 0;
}