/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int result = -1;

        for(int i = 0; i < nums.size(); i++)
        {
            if(count == 0)
            {
                result = nums[i];
            }

            if(result == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return result;
    }
};
// @lc code=end

