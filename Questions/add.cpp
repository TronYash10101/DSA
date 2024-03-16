#include <iostream>

using namespace std;

class Node
{
public:
    float data;
    Node *next;

    Node(float data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head = NULL;

    float insert(int value)
    {
        Node *newnode = new Node(value);
        newnode->next = head;
        head = newnode;
        return head->data;
    }
    void display()
    {
        Node *p = head;
        while (p != NULL)
        {
            cout << p->data << "->";
            p = p->next;
        }
    }
};
Node *addTwoNumbers(Node *l1, Node *l2)
{
}

int main()
{
    LinkedList obj1;

    obj1.insert(10);
    obj1.insert(20);
    obj1.insert(30);
     
    // obj1.display();
    return 0;
}