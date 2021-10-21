/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    int getNext(int n)
    {
        int result = 0;

        while(n > 0)
        {
            int res = n % 10;
            result += res * res;
            n /= 10;
        }

        return result;
    }

    bool isHappy(int n) {
        int fast = n, slow = n;

        do
        {
            slow = getNext(slow);
            
            fast = getNext(fast);
            fast = getNext(fast);
        } while (fast != slow);
        
        return slow == 1;
    }
};
// @lc code=end

