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


    int maxDepth(TreeNode* root) {

        if(root == NULL) 
        return 0;
       int MDepLeft = maxDepth (root->left);
       int MDepRight = maxDepth (root->right);
        return 1 + max(MDepLeft , MDepRight);
    }
};