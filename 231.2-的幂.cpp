/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int big = 1 << 30;

        return n > 0 && big % n == 0;
    }
};
// @lc code=end

