/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string buffer = countAndSay(n - 1);
        int length = buffer.length();
        int start = 0;
        for(int i = 1; i < length + 1; i++)
        {
            if(i == length)
            {
                buffer
            }
        }
    }
};
// @lc code=end

