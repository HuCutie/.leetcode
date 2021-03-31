/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
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

