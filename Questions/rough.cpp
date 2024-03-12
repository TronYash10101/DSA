#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {

//         string ss = to_string(x);
//         reverse(ss.begin(),ss.end());

//         if (ss == to_string(x))
//         {
//             return true;
//         }
//         return false;

//     }
// };
class Solution
{
public:
    vector<int> buildArray(vector<int>nums)
    {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++)
        {
            arr.push_back(nums[nums[i]]);
        }
        return arr;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    obj.buildArray(nums);

    return 0;
}