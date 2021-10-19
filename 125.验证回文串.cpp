/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isCharorNum(char a)
    {
        if((65 <= a && a <= 90) || (97 <= a && a <= 122) || (48 <= a && a <= 57))
        {
            return true;
        }

        return false;
    }

    bool isChar(char a)
    {
        if ((65 <= a && a <= 90) || (97 <= a && a <= 122))
        {
            return true;
        }

        return false;
    }

    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;

        while (i < j)
    {
        if (!isCharorNum(s[i]))
        {
            i++;
            continue;
        }
        if (!isCharorNum(s[j]))
        {
            j--;
            continue;
        }

        if(isChar(s[i]) && isChar(s[j]))
        {
            if((s[i] == s[j]) || (s[i]-32 == s[j]) || s[i]+32 == s[j])
            {
                i++;
                j--;
                continue;
            }
            else
            {
                return false;
            }
        }
        else if(!isChar(s[i]) && !isChar(s[j]))
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
                continue;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

    return true;
    }
};
// @lc code=end

