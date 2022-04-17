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
    
    TreeNode* curr = new TreeNode(-1);
public:
    void helper(TreeNode* node){
        if(node==NULL){
            return;
        }
        helper(node->left);
        node->left=NULL;
        curr->right=node;
        curr=node;
        helper(node->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans= curr;
        helper(root);
        return ans->right;
    }
};