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

    bool isFull() {
        return (front + 1) % max_size == back;
    }

    void enque(int value)
    {
       if (isFull()) {
            cout << "Queue is full. Cannot enqueue element.\n";
            return;
        }
        arr[front] = value;
        front = (front + 1) % max_size;
    }

    void display(){
        
        for (int i = 0; i < max_size; i++)
        {
            cout << arr[i] << "\n";
        }
            cout << front;
    }
};

int main()
{
    queue obj(5);

    obj.enque(10);
    obj.enque(60);
    obj.enque(50);
    obj.enque(90);
    obj.enque(70);
    // cout<< obj.arr[];
    obj.display();


    
    return 0;
}