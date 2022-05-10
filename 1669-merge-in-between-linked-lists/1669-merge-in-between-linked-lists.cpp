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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       /* ListNode* temp=list1;
        ListNode* temp1=list2;
        ListNode* prev,*curr;
        if(a==b){
            while(temp->val!=a){
                prev=temp;
                temp=temp->next;
                curr=temp->next;
            }
            prev->next=temp1;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=curr;  
        }else{  
            while(temp->val!=a){
                prev=temp;
                temp=temp->next;
            }
            while(temp->val!=b){
                temp=temp->next;
                curr=temp->next;
            }

            prev->next=temp1;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=curr;
        }
        */
        ListNode *tempa=list1,*tempb=list1;
        ListNode *temp=list2;
        for(int i=0;i<a-1;i++){
            tempa=tempa->next;
        }
        for(int i=0;i<b;i++){
            tempb=tempb->next;
        }
        tempa->next=list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=tempb->next;
        return list1;
    }
};