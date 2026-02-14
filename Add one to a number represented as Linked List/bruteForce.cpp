/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
// time complexity = O(3n)
// space complexity = O(1)

Node *reverseList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
Node *addOne(Node *head)
{
    // Write Your Code Here.

    head = reverseList(head);

    Node *temp = head;
    int carry = 1;

    while (temp != NULL)
    {
        temp->data += carry;

        if (temp->data < 10)
        {
            carry = 0;
            break;
        }
        else
        {
            temp->data = 0;
            carry = 1;
        }
        temp = temp->next;
    }

    if (carry == 1)
    {
        Node *newNode = new Node(1);

        head = reverseList(head);
        newNode->next = head;
        head = newNode;
        return head;
    }

    head = reverseList(head);
    return head;
}
