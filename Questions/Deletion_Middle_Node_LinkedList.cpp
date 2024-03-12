#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head = NULL;

    Node *insert(int data)
    {
        Node *newnode = new Node(data);

        newnode->next = head;
        head = newnode;

        return newnode;
    }

    Node *middle_deletion(Node *head_ele,int size_LL)
    {
        int middle = (size_LL / 2);
        Node *p = head_ele;
        int counter;
        if (middle % 2 != 0)
        {
            counter =-1; //!odd
        }
        else
        {
            counter = 1; //!even
        }
        do
        {
            p = p->next;
            counter += 1;
        } while (counter != middle);
        p->next = p->next->next;

        
        cout << head->data;

    }

    int size()
    {
        Node *p = head;

        int size_LL = 0;
        while (p != NULL)
        {
            p = p->next;
            size_LL += 1;
        }
        return size_LL;
    }
    void display()
    {
        Node *p = head;

        // int size_LL = 0;
        while (p != NULL)
        {
            cout << p->data << "\n";
            p = p->next;
            // size_LL += 1;
        }
        // return size_LL;
    }
};

int main()
{
    LinkedList obj;

    Node *node1 = obj.insert(1);
    Node *node2 = obj.insert(3);
    Node *node3 = obj.insert(4);
    Node *node4 = obj.insert(7);
    Node *node5 = obj.insert(1);
    Node *node6 = obj.insert(2);
    Node *node7 = obj.insert(6);

    int size_LL = obj.size();
    obj.middle_deletion(node7,size_LL);
    obj.display();

    // head = [1,3,4,7,1,2,6]

    return 0;
}