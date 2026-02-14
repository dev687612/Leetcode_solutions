// /*
// Following is the class structure of the Node class:

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     Node(int data, Node* next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };
// */

// Node *optimize_app(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }

//     // if(head->next->next == NULL)
//     // {
//     //     return head->next;
//     // }

//     Node *fast = head->next;
//     Node *slow = head;

//     while (fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//         }
//         slow = slow->next;
//     }
//     return slow;
// }

// int get_length(Node *head)
// {
//     int len = 0;
//     while (head != NULL)
//     {
//         len++;
//         head = head->next;
//     }
//     return len;
// }

// Node *findMiddle(Node *head)
// {

//     return optimize_app(head);

//     // int len = get_length(head);
//     // int ans = (len/2);

//     // Node* temp = head;
//     // int count=0;
//     // while(count<ans)
//     // {
//     //     temp = temp->next;
//     //     count++;
//     // }
//     // return temp;
// }
