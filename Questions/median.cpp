#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1,vector<int>& nums2) {
        vector<int>result;
        auto iter1 = nums1.begin();
        auto iter2 = nums2.begin();

        while (iter1 != nums1.end() && iter2 != nums1.end()) {
        result.push_back(*iter1++);
        result.push_back(*iter2++);
    }
        
    }
};

int main()
{
    Solution obj;
    vector<int>arr1= {1,3};
    vector<int>arr2= {2};
    obj.findMedianSortedArrays(arr1,arr2);
    return 0;
}