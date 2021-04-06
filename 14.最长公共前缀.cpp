/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 * 选取第一串为单位串；
 * 以单位串进行比较，查看其余串中是否有相同部分，无的话就模板串长度减一
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

