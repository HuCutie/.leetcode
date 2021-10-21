/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel 表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        long index = 1;

        for(int i = columnTitle.size()-1; i >= 0; i--)
        {
            int num = columnTitle[i] - 'A' + 1;
            result += num * index;
            index *= 26;
        }

        return result;
    }
};
// @lc code=end

