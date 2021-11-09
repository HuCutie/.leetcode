/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0)
        {
            return false;
        }

        int factor[3] = {2, 3, 5};

        for(int i = 0; i < 3; i++)
        {
            while(n % factor[i] == 0)
            {
                n /= factor[i];
            }
        }

        return n == 1;
    }
};
// @lc code=end

