/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 * Fibnacci数列，使用循环能得到时间复杂度和空间复杂度最低的解法
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int f1 = 0, f2 = 1;
        int f3;
        for(int i = 1; i <= n; i++)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        return f3;
    }
};
// @lc code=end

