/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target <= nums[0])
        {
            nums.insert(nums.begin(), target);
            return 0;
        }   
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i - 1] <= target && target <= nums[i])
            {
                nums.insert(nums.begin() + i, target);
                return i;
            }
        }   
        nums.push_back(target);
        return nums.size() - 1;    
    }
};
// @lc code=end

