#include <iostream>

using namespace std;

class Queue
{
public:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int data;
    int front = -1;
    int back = -1;

    int isEmpty(){
        if (front == back)
        {
            return 1;
        }
        return 0;
    }

    void enque(int value){
        
       back += 1; 
       arr[back] = value; 
    }
    void deque(){
        
        front += 1;
        arr[0] = arr[front + 1];
    }
    void display(){
        if (isEmpty())
        {
            cout << "Queue Empty";
        }
        for (int i = front+1; i <= back; i++)
        {
            cout << arr[i] << "\n";
        }
    }
};

int main()
{
    Queue queue;

    queue.enque(6);
    queue.enque(8);
    queue.enque(10);
    queue.enque(23);
    queue.display();

    return 0;
}