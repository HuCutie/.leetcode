/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s2t;
        unordered_map<char, char> t2s;

        int length = s.length();
        for(int i = 0; i < length; i++)
        {
            char a = s[i];
            char b = t[i];
            if((s2t.count(a) && s2t[a] != b) || (t2s.count(b) && t2s[b] != a))
            {
                return false;
            }
            s2t[a] = b;
            t2s[b] = a;
        }

        return true;
    }
};
// @lc code=end

