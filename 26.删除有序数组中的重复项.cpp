/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i - 1]) 
                flag++;
            else
                nums[i - flag] = nums[i];
        }
        return nums.size() - flag;
    }
};
// @lc code=end

