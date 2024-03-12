#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Stack
{
public:
    int top;
    int size;
    char *stack_arr;
    int current_filled;

    Stack(int size)
    {
        this->stack_arr = new char[size];
        this->size = size;
        this->current_filled = 0;
        this->top = -1;
    }

    string remove_whitespaces_arr(char arr[50], string experssion)
    {

        int j = 0;

        for (int i = 0; i < experssion.length(); ++i)
        {
            if (experssion[i] != ' ')
            {
                arr[j++] = experssion[i];
            }
        }

        arr[j] = '\0';

        return arr;
    }

    void push()
    {
        if (current_filled == size)
        {
            cout << "Stack Overflow";
        }
        stack_arr[current_filled++] = '(';
        top = current_filled - 1;
    }

    int pop()
    {

        --current_filled;
        top = current_filled - 1;
        size -= 1;
        return 1;
    }

    void check(string arr, int length)
    {
        for (int i = 0; i < length; i++)
        {

            if (arr[i] == '(')
            {
                push();
            }
            if (arr[i] == ')')
            {
                pop();
            }
        }
        if (current_filled == 0)
        {
            cout << "balanced";
        }
        else
        {
            cout << "unbalanced";
        }
    }

};

int main()
{
    Stack obj(50);

    char arr[50];
    string experssion = "()[";

    string new_arr = obj.remove_whitespaces_arr(arr, experssion);
    obj.check(new_arr, 2);

    return 0;
}
