/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s[0] == ' ')
            return 0;
        
        int len = s.length() - 1;
        while(len >= 0 && (s[len] == ' '))
        {
            len--;
        }
        if(len < 0)
            return 0;
        int lem = len;
        while(lem > 0 && (s[lem] != ' '))
        {
            lem--;
        }
        return len - lem;
    }
};
// @lc code=end

