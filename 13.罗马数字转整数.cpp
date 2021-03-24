/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        int i = 0;
        while(i < s.size())
        {
            switch (s[i])
            {
                case 'M':
                    res += 1000;
                    i++;
                    break;
                case 'D':
                    res += 500;
                    i++;
                    break;
                case 'C':
                    if(s[i + 1] == 'D')
                    {
                        res += 400;
                        i += 2;
                        break;
                    }
                    else if(s[i + 1] == 'M')
                    {
                        res += 900;
                        i += 2;
                        break;
                    }
                    else
                    {
                        res += 100;
                        i++;
                        break;
                    }
                case 'L':
                    res += 50;
                    i++;
                    break;
                case 'X':
                    if(s[i + 1] == 'L')
                    {
                        res += 40;
                        i += 2;
                        break;
                    }
                    else if(s[i + 1] == 'C')
                    {
                        res += 90;
                        i += 2;
                        break;
                    }
                    else
                    {
                        res += 10;
                        i++;
                        break;
                    }
                case 'V':
                    res += 5;
                    i++;
                    break;
                case 'I':
                    if(s[i + 1] == 'V')
                    {
                        res += 4;
                        i += 2;
                        break;
                    }
                    else if(s[i + 1] == 'X')
                    {
                        res += 9;
                        i += 2;
                        break;
                    }
                    else
                    {
                        res += 1;
                        i++;
                        break;
                    }
            }
        }
        return res;
    }
};
// @lc code=end

