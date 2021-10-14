/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start
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
    int minDepth(TreeNode* root) {
        if(root != NULL)
        {
            if(root->left != NULL && root->right != NULL)
            {
                int l = minDepth(root->left);
                int r = minDepth(root->right);

                return l < r ? l+1 : r+1;
            }
            else if(root->left == NULL && root->right == NULL)
            {
                return 1;
            }
            else
            {
                int l = minDepth(root->left);
                int r = minDepth(root->right);

                return l == 0 ? r+1 : l+1;
            }
        }
        return 0;
    }
};
// @lc code=end

