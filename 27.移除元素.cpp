/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int flag = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[flag] = nums[i];
                flag++;
            }
        }
        return flag;
    }
};
// @lc code=end

