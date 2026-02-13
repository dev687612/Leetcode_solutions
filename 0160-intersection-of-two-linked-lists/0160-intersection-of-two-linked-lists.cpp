/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // time complexity = O(N * 1 )
 // space complexity = O(N)  (whatever link list you stored)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        
        unordered_map<ListNode* , int> mpp;

        ListNode* temp1 = head1;
        
        while(temp1!=nullptr)
        {
            mpp[temp1] = 1;

            temp1=temp1->next;
        }

        ListNode* temp2 = head2;

        while(temp2!=nullptr)
        {
            if(mpp.find(temp2) != mpp.end())
            {
                return temp2;
            }
            temp2=temp2->next;
        }

        return NULL;
    }
};