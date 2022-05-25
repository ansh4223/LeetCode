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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while (temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size();
        vector<int> res(n, 0);
        stack<int> s;
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && v[s.top()] <= v[i]) {
                s.pop();
            }
            if (!s.empty()) {
                res[i] = v[s.top()];
            }
            s.push(i);
        }
        
        return res;
    }
};