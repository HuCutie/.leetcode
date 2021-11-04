/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int i = 0;

        while(i < nums.size())
        {
            int low = i;
            i++;

            while(i < nums.size() && nums[i] == nums[i-1] + 1)
            {
                i++;
            }

            int high = i - 1;
            string t = to_string(nums[low]);

            if(low < high)
            {
                t  = t + "->" + to_string(nums[high]);
            }

            res.push_back(t);
        }

        return res;
    }
};
// @lc code=end

