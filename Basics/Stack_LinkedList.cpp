#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    int head;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack_LinkedList
{
public:
    Node *head = NULL;

    Node *push(int data)
    {
        Node *newnode = new Node(data);

        newnode->next = head;
        head = newnode;

        return newnode;
    }
    
    Node *top(){

        Node *p = head;
        if (!p)
        {
            return 0;
        }
  
        while (p->next != NULL)
        {
            p = p->next;
        }

        Node *top = p;
        return top;
    }

    Node *pop(Node *top){

        // if (!Stack_LinkedList::top())
        // {
        //     cout << "EMPTY STACK";
        // }
        Node *p = head;

        while (p->next != top)
        {
            p = p->next;
        }
        Node *new_top = p;
        new_top->next = NULL;
        return new_top;
    }

    void display()
    {
        Node *p = head;

        if (!Stack_LinkedList::top())
        {
            cout << "EMPTY STACK";
        }
        while (p != NULL)
        {
            cout << p->data << "->";
            p = p->next;
        }
    }

    
};

int main()
{
    Stack_LinkedList obj;

    // Node *ele1 = obj.push(10);
    // Node *ele2 = obj.push(20);
    // Node *ele3 = obj.push(30); // head
    Node *top = obj.top();

    // cout << obj.pop(top);

    obj.pop(top);
    obj.display();

    return 0;
}