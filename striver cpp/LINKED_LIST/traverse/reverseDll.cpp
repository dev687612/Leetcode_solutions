#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtHead(Node *&head, int val)
{
    Node *temp = new Node(val);

    if (head != NULL)
    {
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void reverse(Node* &head)
{
    stack<int> st;

    Node *temp = head;

    while(temp!=nullptr)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while(temp!=nullptr)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;

    insertAtHead(head, 4);
    print(head);
    insertAtHead(head, 3);
    print(head);
    insertAtHead(head, 2);
    print(head);
    insertAtHead(head, 1);
    print(head);

    cout << "After reversing the linked list : " << endl;
    reverse(head);
    print(head);

    return 0;
}