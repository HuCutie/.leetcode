/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs.empty() ? "" : strs[0];
        for(string s : strs)
        {
            while(s.find(res) != 0)
            {
                res = res.substr(0, res.length() - 1);
            }
        }
        return res;
    }
};
// @lc code=end

