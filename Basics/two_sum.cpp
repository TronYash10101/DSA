#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> two_sum(vector<int>&arr , int target)
{
    unordered_map<int, int> numIndexMap;
    
    for (int i = 0; i < arr.size(); i++)
    {
        int diff = target - arr[i];

        if (numIndexMap.find(diff) == arr[i])
        {
            cout << i;
        }
        numIndexMap[i] = arr[i];
    }
    
    

    return {};
}

int main()
{
    vector<int> myVector = {1, 2, 3, 4, 5};
    int target = 7;
    // 6 , 5, 4 ,
    two_sum(myVector, target);
    return 0;
}