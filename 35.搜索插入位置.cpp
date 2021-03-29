/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target < nums[0])
        {
            nums.insert(nums.begin(), target);
            return 0;
        }   
        if(target > nums[nums.size() - 1])
        {
            nums.push_back(target);
            return nums.size() - 1;
        }
        vector<int>::iterator it;
        int i;
        for(i = 0, it = nums.begin(); i < nums.size() - 1; i++, it++)
        {
            if(*it < target && target < *it)
            {
                nums.insert(it + 1, target);
                return i;
            }
        }       
    }
};
// @lc code=end

