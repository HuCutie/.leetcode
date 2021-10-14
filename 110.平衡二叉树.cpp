/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    int getHeight(TreeNode * root)
    {
        if(root != NULL)
        {
            if(root->left == NULL && root->right == NULL)
            {
                return 1;
            }
            int l = getHeight(root->left);
            int r = getHeight(root->right);
            return l > r ? l+1 : r+1;
        }
        return 0;
    }

    int diff(TreeNode * root)
    {
        if(root != NULL)
        {
            return getHeight(root->left) - getHeight(root->right);
        }

        return 0;
    }

    bool isBalanced(TreeNode* root) {
        if(root != NULL)
        {
            int differ = diff(root);

            if(differ > 1 || differ < -1)
            {
                return false;
            }

            return isBalanced(root->left) && isBalanced(root->right);
        }
        
        return true;
    }
};
// @lc code=end

