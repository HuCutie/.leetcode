/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0) return 0;
        if(haystack.length() == 0) return -1;
        int next[needle.length()];
        getNext(next, needle);
        int j = -1;
        for(int i = 0; i < haystack.length(); i++)
        {
            while(j != -1 && needle[j + 1] != haystack[i])
            {
                j = next[j];
            }
            if(needle[j + 1] == haystack[i])
            {
                j++;
            }
            if(j == needle.length() - 1) 
                return i - j;
        }
        return -1;
    }

    void getNext(int * next, string needle)
    {
        int j = -1;
        next[0] = -1;
        for(int i = 1; i < needle.length(); i++)
        {
            while(j != -1 && needle[j + 1] != needle[i])
            {
                j = next[j];
            }
            if(needle[j + 1] == needle[i])
            {
                j++;
            }
            next[i] = j;
        }
    }
};
// @lc code=end

