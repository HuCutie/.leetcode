/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
    每次求余*10，注意溢出
    32位有符号数最大值为 2147483647
               最小值为 -2147483648
    得到中间值时，判断*10之后是否会溢出，且*10之后加上余数后是否会溢出
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x != 0)
        {
            int pop = x % 10;
            x /= 10;
            if(result > INT_MAX / 10 || (result == INT_MAX / 10 && pop > 7))
                return 0;
            if(result < INT_MIN / 10 || (result == INT_MIN / 10 && pop < -8))
                return 0;
            result = result * 10 + pop;
        }
        return result;
    }
};
// @lc code=end

