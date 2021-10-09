/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> seq;
        stack<TreeNode *> S;
        TreeNode * p = root;

        while(p != NULL || !S.empty())
        {
            while(p != NULL)
            {
                S.push(p);
                p = p->left;
            }
            p = S.top();
            S.pop();
            seq.push_back(p->val);
            p = p->right;
        }

        return seq;
    }
};
// @lc code=end

