/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
    一遍哈希表
    遍历，在数组里查找是否存在target - nums[i]
        若存在，给返回结果的两项分别设置值，返回
        若不存在，将该项插入至哈希表
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> a;
        vector<int> result(2, -1);
        for(int i = 0; i < nums.size(); i++)
        {
            if(a.count(target - nums[i]) > 0)
            {
                result[0] = a[target - nums[i]];
                result[1] = i;
                break;
            }
            a[nums[i]] = i;
        }
        return result;
    }
};
// @lc code=end

