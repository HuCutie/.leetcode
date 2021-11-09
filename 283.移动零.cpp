/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        bool flag = false;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                count++;
                flag = true;
                continue;
            }

            if(flag)
            {
                nums[i-count] = nums[i];
            }
        }

        for(int i = 0; i < count; i++)
        {
            nums[nums.size()-1-i] = 0;
        }
    }
};
// @lc code=end

