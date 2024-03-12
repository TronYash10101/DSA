#include <iostream>
using namespace std;

int binary_sort(int arr[], int arr_size, int target)
{

    int low, mid, high;

    low = 0;
    high = arr_size - 1;

    while (low <= high)
    {
        mid = (low + high / 2) ;
        if (target == arr[mid])
        {
            return mid;
        }
        if (target < arr[mid])
        {
            high = mid -1;
        }
        else
        {
            low = mid +1;
        }
    }
    return -1;
}

void show(int arr[], int n)
{

    int size = 5, target = 22;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }

    cout << binary_sort(arr,size,target);
}


int sorting(int arr[], int arr_size)
{

    for (int i = 0; i < arr_size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
            {
                int c = arr[j];
                arr[j] = arr[i];
                arr[i] = c;
            }
        }
    }
    show(arr, arr_size);

    return 1;
}

int main()
{
    int array[100] = {45, 22, 23,12,52};

    int arr_size = 5;
    sorting(array, arr_size);
    return 0;
}