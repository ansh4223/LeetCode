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
        ListNode* nodes = new ListNode(0);
        ListNode* temp1;
        temp1=nodes;
        ListNode* temp;
        temp=head;
        temp=temp->next;
        int sum=0;
        while(temp!=NULL){
            while(temp->val!=0){
                sum=sum+temp->val;
                temp=temp->next;
            }
            temp1->next= new ListNode(sum);
            temp1=temp1->next;
            temp=temp->next;
            sum=0;
        }
        return nodes->next;
    }
};