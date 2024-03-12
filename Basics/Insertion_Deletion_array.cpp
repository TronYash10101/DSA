#include <iostream>
using namespace std;

int insertion(int arr[], int element, int arr_size, int index, int capacity)
{
    if (arr_size >= capacity)
    {
        return -1;
    }

    for (int i = arr_size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}

int deletion(int arr[], int arr_size, int index)
{
    for (int i = index; i < arr_size; i++)
    {

        arr[i] = arr[i+1];

    }
    return 1;
}

int main()
{
    int array[100] = {2, 1, 23, 46};

    int element = 45, arr_size = 4, index = 4;

    // insertion(array, element, arr_size, index, 100);
    // arr_size += 1;
    deletion(array,arr_size,index);
    arr_size -= 1;

    show(array, arr_size);

    return 0;
}
