#include <iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

class Doubly_LinkedList
{
public:
    Node *head = NULL;

    Node *insertion(int data)
    {
        Node *newnode = new Node(data);
        if (!head)
        {
            head = newnode;
        }
        else
        {
            Node *p = head;

            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = newnode;
            newnode->prev = p;
        }
        return newnode;
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

    void display_back()
    {
        Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        while (p != NULL)
        {
            cout << p->data << "->";
            p = p->prev;
        }
    }
};

int main()
{
    Doubly_LinkedList obj;

    Node *node1 = obj.insertion(56);
    Node *node2 = obj.insertion(76);
    Node *node3 = obj.insertion(86);

    obj.display();
    cout << "\n";
    obj.display_back();

    return 0;
}