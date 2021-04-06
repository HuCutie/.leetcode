/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 * 牛顿迭代法，可以得到时间复杂度最低的解法
 * res = (x + s/x) / 2；
 */

// @lc code=start
class Solution {
public:
    int s;

    int mySqrt(int x) {
        s = x;
        if(x == 0) return 0;
        return (int)NewTonIter(x);
    }

    double NewTonIter(double x)
    {
        double res = (x + s / x) / 2;
        if(res == x)
            return x;
        return NewTonIter(res);
    }
};
// @lc code=end

