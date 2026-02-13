/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

void insert_tail(Node* &tail , Node* &curr)
{
    tail->next = curr;
    tail = curr;
}


Node* sortList(Node *head){
    
    //create seperate node
    Node* zero_head = new Node(-1);
    Node* zero_tail = zero_head;

    Node* one_head = new Node(-1);
    Node* one_tail = one_head;
    
    Node* two_head = new Node(-1);
    Node* two_tail = two_head;

    Node* curr = head;

    while(curr != NULL)
    {
        int val = curr->data;
    
        if(val == 0)
        {
            insert_tail(zero_tail , curr);
        }

        else if(val == 1)
        {
            insert_tail(one_tail , curr);
        } 
        else if (val == 2) 
        {
            insert_tail(two_tail, curr);
        }

    curr = curr->next;
    }

    if(one_head->next != NULL)
    {
        zero_tail->next = one_head->next;
    }

    else // list is empty (one_head->next == NULL)
    {
        zero_tail->next = two_head->next;
    }

    one_tail->next = two_head->next;
    two_tail->next = NULL;

    //create head in merge node
    head = zero_head->next;

    //delete node
    delete zero_head;
    delete one_head;
    delete two_head;

    return head;

}