/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = n*(n+1)/2;

        int total = 0;
        for(int i = 0; i < n; i++)
        {
            total += nums[i];
        }

        return sum-total;
    }
};
// @lc code=end

