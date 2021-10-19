/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode *> Stack;
        TreeNode * p = root;
        TreeNode * r = NULL;

        while(p != NULL || !Stack.empty())
        {
            if(p != NULL)
            {
                Stack.push(p);

                p = p->left;
            }
            else
            {
                p = Stack.top();
                if(p->right != NULL && p->right != r)
                {
                    p = p->right;
                }
                else
                {
                    Stack.pop();
                    res.push_back(p->val);
                    r = p;
                    p = NULL;
                }
            }
        }

        return res;
    }
};
// @lc code=end

