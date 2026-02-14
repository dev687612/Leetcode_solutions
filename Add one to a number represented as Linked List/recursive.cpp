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

// time comlexity = O(n)
// space complexity = O(n)

int carry_recursive(Node *head)
{
    Node *temp = head;

    // base case;
    if (temp == NULL)
    {
        return 1;
    }
    // recursive case
    int carry = carry_recursive(temp->next);

    temp->data += carry;

    if (temp->data < 10)
    {
        return 0;
    }
    temp->data = 0;
    return 1;
}
Node *addOne(Node *head)
{
    // Write Your Code Here.
    Node *temp = head;

    int carry = carry_recursive(head);

    if (carry == 1)
    {
        Node *newNode = new Node(1);
        newNode->next = head;
        head = newNode;
        return head;
    }
    return head;
}
