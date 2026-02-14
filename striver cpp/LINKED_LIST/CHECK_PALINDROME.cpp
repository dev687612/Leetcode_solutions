// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// #include <vector>
// class Solution
// {
// public:
//     bool isPalindrome(ListNode *head)
//     {
//         vector<int> arr;
//         ListNode *curr = head;

//         while (curr != NULL)
//         {
//             arr.push_back(curr->val);
//             curr = curr->next;
//         }

//         int n = arr.size();
//         int s = 0;
//         int e = n - 1;

//         while (s <= e)
//         {
//             if (arr[s] != arr[e])
//             {
//                 return false;
//             }
//             s++;
//             e--;
//         }
//         return true;
//     }
// };




// LEETCODE 234
// PALINDRONE LINKED LIST *************

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
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