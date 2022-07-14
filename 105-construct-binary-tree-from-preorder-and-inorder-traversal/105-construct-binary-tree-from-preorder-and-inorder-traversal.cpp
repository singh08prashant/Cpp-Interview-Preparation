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
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int preStart, int inStart, int inEnd)
    {
        if(preStart >= preorder.size() || inStart > inEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inIndex = 0;
        
        for(int i = inStart; i <= inEnd; i++)
        {
            if(inorder[i] == root->val)
            {
                inIndex = i;
            }
        }
        
        root->left = solve(preorder, inorder, preStart + 1, inStart, inIndex - 1);
        
        root->right = solve(preorder, inorder, preStart + inIndex - inStart + 1, inIndex + 1, inEnd);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return solve(preorder, inorder, 0, 0, inorder.size() - 1);
    }
};