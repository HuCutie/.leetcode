/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 * 递归得到外观数列
 * 首先需要得到上一个外观数列串previous；
 * 遍历这个串，对其中连续的相同数字进行计数
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string previous = countAndSay(n - 1);
        string result = "";
        int count = 1;
        for(int i = 0; i < previous.length(); i++)
        {
            if(previous[i] == previous[i + 1])
            {
                count++;
            }
            else
            {
                result += to_string(count) + previous[i];
                count = 1;
            }
        }
        return result;
    }
};
// @lc code=end

