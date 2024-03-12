#include <iostream>

using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;
    int current_filled;
    Stack(int size)
    {
        this->arr = new int[size];
        this->top = -1;
        this->size = size;
        this->current_filled = 0;
    }

    bool isEmpty()
    {
        if (!current_filled)
        {
            return 0;
        }
        return 1;
    }

    void push(int value)
    {
        if (current_filled == size)
        {
            cout << "Stack Overflow";
            return;
        }
        arr[current_filled++] = value;
        top = current_filled - 1;
    }

    int pop()
    {
        --current_filled;
        top = current_filled - 1;
        size -=1;
        return arr[current_filled];
    }
    void display_stack()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "\n";
        }
    }

    int peek(int index)
    {
        if (!isEmpty())
        {
            cout << "No elements cannot access stack";
        }
        return arr[0 + index - 1];
    }
};

int main()
{

    int stack_size = 5;
    Stack s(stack_size);

    s.push(23);
    s.push(56);
    s.push(28);
    s.push(256);
    s.push(98);
    // s.pop();
    s.display_stack();

    return 0;
}