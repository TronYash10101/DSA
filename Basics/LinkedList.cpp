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

    Node *insert_newnode_beginning(float data)
    {
        Node *newnode = new Node(data);

        newnode->next = head;
        head = newnode;
        return newnode;
    }
    //! Only consecutive elements should be provided, but if not then a new likned list is formed between the provided elements
    Node *insert_between(Node *prev_ele, Node *next_ele, float data)
    {
        Node *nodex = new Node(data);
        nodex->next = next_ele;
        prev_ele->next = nodex;
        return nodex;
    }

    void deletion(Node *head_ele, Node *target)
    {
        Node *p = head_ele;

        if (target->next != NULL)
        {
            while (p->next != target)
            {
                p = p->next;
            }
            p->next = target->next;
            free(target);
        }
        else
        {
            while (p->next != target)
            {
                p = p->next;
            }
            p->next = NULL;
            free(target);
        }
        }

    void display()
    {
        Node *current = head;

        Node *temp = head;
        if (temp == NULL)
        {
            cout << "Null";
        }
        cout << "Linked List:-"
             << "\n";
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL"
             << "\n";
    }
};

int main()
{
    LinkedList obj;

    //! Last element inserted here at last is the first element

    Node *node1 = obj.insert_newnode_beginning(234.34);
    Node *node2 = obj.insert_newnode_beginning(50);
    Node *node3 = obj.insert_newnode_beginning(23);
    Node *node4 = obj.insert_newnode_beginning(25);
    Node *node5 = obj.insert_newnode_beginning(27);
    Node *node6 = obj.insert_newnode_beginning(34);

    Node *head = node6;
    Node *end = node1;
    Node *inserted1 = obj.insert_between(node3, node2, 56);
    Node *inserted2 = obj.insert_between(node4, node3, 886);
    obj.display();
    obj.deletion(head, inserted2);
    obj.display();

    // cout << "element 1:- "<< nodex->data;
}