// IMPLEMENTATION OF NODE IN LINKED LIST

#include<bits/stdc++.h>
// #include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int number1)
    {
        this->data = number1;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "MEMORY IS FREE for data : " << this->data << endl;
    }
};

// INSERT AT HEAD.....
void insert_athead(node *&head, int number) // reference ---> we do not want to copy. we want change the data in original linked list
{
    node *temp = new node(number);
    temp->next = head;
    head = temp;
}

// INSERT AT TAIL....
void insert_attail(node *&tail, int number)
{
    node *temp = new node(number);
    tail->next = temp;
    tail = temp;
}

void insert_pos(node *&head, node *&tail, int pos, int data)
{

    if (pos == 1)
    {
        insert_athead(head, data); // INSERT THE ELEMENT AT BEGINNING OF THE LINKED LIST
        return;
    }

    node *temp = head;
    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insert_attail(tail, data); // INSERT AT TAIL
        return;
    }

    node *insert_new_node = new node(data);

    insert_new_node->next = temp->next;
    temp->next = insert_new_node;
}

void delete_node(int pos, node *&head)
{
    // delete starting node
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        node *curr = head;
        node *pre = NULL;

        int count = 1;
        while (count < pos)
        {
            pre = curr;
            curr = curr->next;
            count++;
        }

        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print_linked_list(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(11);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    node *head = node1;
    node *tail = node1;

    print_linked_list(head);

    // insert_athead(head, 12);
    // print_linked_list(head);

    // insert_athead(head, 13);
    // print_linked_list(head);

    insert_attail(tail, 12);
    print_linked_list(head);

    insert_attail(tail, 13);
    print_linked_list(head);

    insert_attail(tail, 14);
    print_linked_list(head);

    // insert_pos(head, tail, 5, 76);
    // print_linked_list(head);

    // cout << "HEAD : " << head->data << endl;
    // cout << "TAil : " << tail->data << endl;

    // delete_node(5, head);
    // print_linked_list(head);

    // cout << "HEAD : " << head->data << endl;
    // cout << "TAil : " << tail->data << endl;   // TAIL IS NOT FIX IN LINKED LIST------HOMEWORK

    return 0;
}