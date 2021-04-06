/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
    负数、整十数和0直接返回；
    按照反转的方法进行判断，注意每次*10后的溢出
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0))
            return false;
        int rev = 0;
        while(x > rev)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev == x || rev / 10 == x;
    }
};
// @lc code=end

