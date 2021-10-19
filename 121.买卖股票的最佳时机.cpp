/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPrice = prices[0];

        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            else if(profit < prices[i] - minPrice)
            {
                profit = prices[i] - minPrice;
            }
        }

        return profit;
    }
};
// @lc code=end

