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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *temp=NULL;
        if(root){ 
         if(root->left==NULL && root->right==NULL && root->val!=val){ return temp; }
        if(val==root->val){ return root;}
        else if(val>root->val){ return searchBST(root->right,val);}
        return searchBST(root->left,val);
        
        }
        return temp;
        
    }
};