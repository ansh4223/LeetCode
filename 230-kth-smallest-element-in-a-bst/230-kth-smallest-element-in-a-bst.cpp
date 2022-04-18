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
    int c=0;
    int ans=0;
    void dfs(TreeNode *root,int k)
    {
        if(root)
        {
            dfs(root->left,k);
            c++;
            if(c==k){ ans=root->val; return ;}
            dfs(root->right,k);
        }
        

    }
public:
    int kthSmallest(TreeNode* root, int k) {
        dfs(root,k);
        return ans;
    }
};