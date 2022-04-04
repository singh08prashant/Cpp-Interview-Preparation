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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        ListNode* first=NULL;
        ListNode* second=NULL;
        k-=1;
        
        while(k--){
            fast=fast->next;
        }
        
        first=fast;
        
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        
        second=slow;
        
        swap(first->val,second->val);
        return head;
    }
};