// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node() {
        int value = this->data;
        while(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "MEMORY IS FREE for data : " << this->data << endl;
    }
};

void print_Linked_List(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int length(node *&head)
{
    int len = 0;
    node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertat_head(node *&head, node *&tail, int data)
{

    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);

        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertat_tail(node *&tail, node *&head, int data)
{
    if (tail == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertat_pos(node *&head, node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertat_head(head, tail, data);
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
        insertat_tail(tail, head, data);
        return;
    }

    node *nodetoinsert = new node(data);

    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void delete_node(int pos , node* &head )
{
    if(pos == 1)
    {
        node *temp = head;  //starting element
        temp->next->prev = NULL;
        head = temp->next;
        temp->prev = NULL;
        delete temp;
    }

    else {
        node *curr = head;
        node *pre = NULL;

        int count = 1;

        while(count < pos)
        {
            pre = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    node *node1 = new node(10);

    node *head = NULL;
    node *tail = NULL;
    print_Linked_List(head);

    cout << "the length of linked list is : " << length(head) << endl;

    insertat_head(head, tail, 11);
    print_Linked_List(head);

    insertat_tail(tail, head, 12);
    print_Linked_List(head);

    insertat_pos(head, tail, 2, 4);
    print_Linked_List(head);

    insertat_pos(head, tail, 1, 9);
    print_Linked_List(head);

    insertat_pos(head, tail, 5, 20);
    print_Linked_List(head);

    delete_node(1,head);
    print_Linked_List(head);

    return 0;
}