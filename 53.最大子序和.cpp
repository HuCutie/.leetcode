/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 * 1. 滚动数组，按断是是否选择nums[i];
 * 2. 分治。
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre = 0;
        int maxAns = nums[0];
        for(const auto &x : nums)
        {
            pre = max(pre + x, x);
            maxAns = max(maxAns, pre);
        }
        return maxAns;
    }
};
// @lc code=end

