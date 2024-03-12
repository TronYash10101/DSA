#include <iostream>
#include <vector>

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
        this->next = NULL;
        this->prev = NULL;
    }
};

class LinkedList
{
public:
    Node *head = NULL;

    Node *insert(int data)
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
    void arr_to_linked(int arr1[], int arr2[])
    {
        for (int i = 0; i < 3; i++)
        {
            insert(arr1[i]);
            insert(arr2[i]);
        }
    }
    void display()
    {
        Node *p = head;

        if (p->data == 0)
        {
            cout << "0";
        }
        else
        {
            while (p != NULL)
            {

                cout << p->data << "->";
                p = p->next;
            }
        }
    }
};

int main()
{
    LinkedList obj;

    int arr1[3] = {};
    int arr2[3] = {0};
    obj.arr_to_linked(arr1, arr2);
    obj.display();

    return 0;
}