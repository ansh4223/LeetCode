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
    ListNode* reverseList(ListNode* head) {
       ListNode* curr=head;
       ListNode* prev=NULL,*temp=NULL;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }head=prev;
        return head;
    }
    int pairSum(ListNode* head) {
        ListNode* fast,*slow;
        fast=head;
        slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
    
        ListNode* ptr=reverseList(slow);
        int sum=0,ans=INT_MIN;
        while(ptr)
        {
            sum=ptr->val+head->val;
            ans=max(sum,ans);
            head=head->next;
            ptr=ptr->next;
        }
        return ans;
    }
};