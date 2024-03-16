#include<iostream>
#include<vector>

using namespace std;

int findSecondLargest(vector<int>&arr)
{
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = 0; j < arr.size()-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int c = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
            
        }
        
    }
    return arr[arr.size()-2];
    
}

int main()
{
    vector<int>arr ={3,7,1,5,6,2};
    
    int arr2 = findSecondLargest(arr);

    cout << arr2;

    return 0;
}