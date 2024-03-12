#include <iostream>

using namespace std;

class queue
{
public:
    int *arr;
    int data;
    int front = 0;
    int back = 0;

    queue(int max_size)
    {

        this->arr = new int[max_size];
    }

    void enque(int size)
    {
        if ((front + 1) % size == back)
        {
            cout << "Queue Full";
        }
        front += 1;
    }
};

int main()
{
    queue obj(5);

    return 0;
}