/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal) {
        stack<TreeNode*>stk;
        for(int i=0;i<traversal.length();){
            int level=0;
            while(traversal[i]=='-'){
                ++level;
                ++i;
            }
            int start=i;
            while(isdigit(traversal[i])){
                ++i;
            }
            int val=stoi(traversal.substr(start,i-start+1));
            TreeNode *temp = new TreeNode(val);
            if(stk.empty()){
                stk.emplace(temp);
                continue;
            }
            while(stk.size()>level){
                stk.pop();
            }
            if(stk.top()->left){
                stk.top()->right=temp;
            }else{
                stk.top()->left=temp;
            }
            stk.emplace(temp);
        }
        while(stk.size()>1){
            stk.pop();
        }
        return stk.top();
    }
};