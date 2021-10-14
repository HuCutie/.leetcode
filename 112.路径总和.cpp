/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
        {
            return false;
        }

        if(root->val == targetSum && root->left == NULL && root->right == NULL)
        {
            return true;
        }

        bool l = hasPathSum(root->left, targetSum-root->val);
        bool r = hasPathSum(root->right, targetSum-root->val);

        return l || r;
    }
};
// @lc code=end

