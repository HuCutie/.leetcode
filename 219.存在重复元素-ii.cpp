/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;

        for(int i = 0; i < nums.size(); i++)
        {
            if(s.count(nums[i]) > 0)
            {
                return true;
            }

            s.insert(nums[i]);

            if(s.size() > k)
            {
                s.erase(nums[i-k]);
            }
        }

        return false;
    }
};
// @lc code=end

