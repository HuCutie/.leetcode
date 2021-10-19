/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode *> Stack;
        TreeNode * p = root;

        while(p != NULL || !Stack.empty())
        {
            if(p != NULL)
            {
                res.push_back(p->val);
                Stack.push(p);

                p = p->left;
            }
            else
            {
                p = Stack.top();
                Stack.pop();

                p = p->right;
            }
        }

        return res;
    }
};
// @lc code=end

