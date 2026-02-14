// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~node()
    {
        int val = this->data;
        while (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "MEMEORY IS FREE FOR DATA : " << this->data << endl;
    }
};

void insert_pos(node *&tail, int ele, int data)
{
    // empty linked list
    if (tail == NULL)
    {
        node *temp = new node(data);
        tail = temp;
        temp->next = temp;
    }

    else
    {
        node *curr = tail;

        while (curr->data != ele)
        {
            curr = curr->next;
        }

        node *temp = new node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print_linked_list(node *&tail)
{
    node *temp = tail;

    if(tail == NULL)
    {
        cout << "LIST IS EMPTY " << endl;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;

    } while (tail != temp);
    cout << endl;
}

void delete_pos(node *&tail, int val)
{
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        node *pre = tail;
        node *curr = pre->next;

        while (curr->data != val)
        {
            pre = curr;
            curr = curr->next;
        }

        pre->next = curr->next;

        if (curr == pre)
        {
            tail = NULL;
        }
        else if (tail == curr)
        {
            tail = pre;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{

    node *tail = NULL;

    insert_pos(tail, 2, 4);
    print_linked_list(tail);

    // insert_pos(tail, 4, 5);
    // print_linked_list(tail);

    // insert_pos(tail, 5, 6);
    // print_linked_list(tail);

    // insert_pos(tail,5,10);
    // print_linked_list(tail);

    // insert_pos(tail, 4, 40);
    // print_linked_list(tail);

    // insert_pos(tail, 6, 60);
    // print_linked_list(tail);

    cout << "NOW DELETING NODE IN CIRCULAR LINKED LIST : " << endl;

    delete_pos(tail, 4);
    print_linked_list(tail);

    return 0;
}