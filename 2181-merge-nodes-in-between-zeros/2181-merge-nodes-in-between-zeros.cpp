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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp=head->next,*prev=NULL,*tmp=head;

        int sum=0;
        while(temp && temp->next)
        {
            sum+=temp->val;
            prev=temp;
            temp=temp->next;
            if(temp->val==0)
                {
                   
                    prev->val=sum;
                    head->next=prev;
                    head=head->next;
                    prev->next=NULL;
                    sum=0;
                    
                }
        }
        tmp=tmp->next;
        return tmp;
    }
};