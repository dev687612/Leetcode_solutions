#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;

        Node(int num)
        {
            data = num;
            next = nullptr;
        }

    int lengthLinkedList(Node* head)
    {
        Node *temp = head;

        int cnt = 0;

        while(temp!=nullptr)
        {
            cnt++;

            temp = temp->next;
        }
        return cnt;
    }

    bool searchEle(Node* head , int ele)
    {
        Node *temp = head;

        while(temp!=nullptr)
        {
            if(temp->data == ele)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);

    head->next->next = new Node(30);

    Node *obj;

    int ans = obj->lengthLinkedList(head);

    cout << "the length of the linked list : " << ans << endl;

    cout << "element is : " << obj->searchEle(head, 20) << endl;


    return 0;
}