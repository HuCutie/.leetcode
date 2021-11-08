/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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

    void paths(TreeNode * root, string path, vector<string> & res)
    {
        if(root != NULL)
        {
            path += to_string(root->val);

            if(root->left == NULL && root->right == NULL)
            {
                res.push_back(path);
            }
            else
            {
                path += "->";
                paths(root->left, path, res);
                paths(root->right, path, res);
            }
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string path = "";

        paths(root, path, res);              

        return res;
    }
};
// @lc code=end

