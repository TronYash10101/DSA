#include <iostream>

using namespace std;

class queue
{
public:
    int max_size;
    int *arr;
    int data;
    int front = 0;
    int back = 0;

    queue(int max_size)
    {
        this->max_size = max_size;
        this->arr = new int[max_size];
    }

    

    int enque(int value)
    {
        if ((front + 1) % max_size == back)
        {
            return -1;
        }
        arr[front] = value;
        front += 1;
    }

    void display(){
        // if (isEmpty())
        // {
        //     cout << "Queue Empty";
        // }
        for (int i = 0; i < front; i++)
        {
            cout << arr[i] << "\n";
        }
    }
};

int main()
{
    queue obj(5);

    obj.enque(10);
    obj.enque(60);
    obj.enque(50);
    obj.enque(70);
    obj.enque(90);
    obj.display();
    
    return 0;
}