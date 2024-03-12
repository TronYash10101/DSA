#include <iostream>

using namespace std;

class Node
{
public:
    float data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Circular_Linked_List
{
public:
    Node *head = NULL;

    Node *insert_Node(int data)
    {

        Node *newnode = new Node(data);
        if (!head)
        {
            // If the list is empty, make the new node the head and point it to itself
            head = newnode;
            head->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head;

        }
        return newnode;
    }
    void display_circular_LIL()
    {
        Node *p = head;

            p = p->next;
            cout<<p->data<<"->";
        while (p != head){
            p = p->next;
            cout << p->data << "->";
        };
       
        
        
    }
};

int main()
{
    Circular_Linked_List obj;
    
    //! First element
    Node *node1 = obj.insert_Node(10);
    Node *node2 = obj.insert_Node(20);
    //! Last element

    obj.display_circular_LIL();
    return 0;
}