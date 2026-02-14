// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
//             int data;
//             Node *next;
//             Node()
//             {
//                 this->data = 0;
//                 next = NULL;
//             }
//             Node(int data)
//             {
//                 this->data = data;
//                 this->next = NULL;
//             }
//             Node(int data, Node* next)
//             {
//                 this->data = data;
//                 this->next = next;
//             }
//         };


// *****************************************************************/

// Node *reverse_new(Node *&head)
// {
//     // base case
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }

//     Node *small_head = reverse_new(head->next);

//     head->next->next = head;
//     head->next = NULL;

//     return small_head;
// }

// void reverse(Node *&head, Node *&curr, Node *&prev)
// {
//     // base case
//     if (curr == NULL)
//     {
//         head = prev;
//         return;
//     }

//     Node *forward = curr->next;
//     reverse(head, forward, curr);
//     curr->next = prev;
// }

// Node *reverseLinkedList(Node *head)
// {

//     reverse_new(head);

//     // Node* curr=head;
//     // Node* prev=NULL;
//     // reverse(head, curr, prev);
//     // return head;

//     // Node *prev = NULL;
//     // Node *curr = head;
//     // Node *forward = NULL;

//     // if (head == NULL || head->next == NULL) {
//     //   return head;
//     // }
//     // while (curr != NULL) {
//     //   forward = curr->next;
//     //   curr->next = prev;
//     //   prev = curr;
//     //   curr = forward;
//     // }
//     // return prev;
// }

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */



// APPROACH 2

// class Solution
// {
// private:
//     ListNode *get_mid(ListNode *head)
//     {
//         ListNode *slow = head;
//         ListNode *fast = head->next;

//         while (fast != NULL && fast->next != NULL)
//         {
//             fast = fast->next->next;
//             slow = slow->next;
//         }
//         return slow;
//     }

//     ListNode *reverse(ListNode *head)
//     {
//         ListNode *prev = NULL;
//         ListNode *curr = head;
//         ListNode *forward = NULL;

//         while (curr != NULL)
//         {
//             forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
//     }

// public:
//     bool isPalindrome(ListNode *head)
//     {
//         if (head == NULL && head->next == NULL)
//         {
//             return true;
//         }
//         ListNode *mid = get_mid(head); // mid element

//         ListNode *temp = mid->next; // reverse list
//         mid->next = reverse(temp);

//         ListNode *head1 = head;      // firsthalf
//         ListNode *head2 = mid->next; // secong half

//         while (head2 != NULL)
//         {
//             if (head1->val != head2->val)
//             {
//                 return false;
//             }
//             head1 = head1->next;
//             head2 = head2->next;
//         }

//         temp = mid->next; // reapet step to make original list
//         mid->next = reverse(temp);

//         return true;
//     }
// };
