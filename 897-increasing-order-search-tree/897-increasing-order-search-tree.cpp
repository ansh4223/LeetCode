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
    TreeNode * tree = new TreeNode(0);
public:
    void inorder(TreeNode* root){
        if(root==NULL){
            return ;
        }
        inorder(root->left);
        root->left=NULL;
        tree->right=root;
        tree=root;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* res = tree;
        inorder(root);
        return res->right;
    }
};