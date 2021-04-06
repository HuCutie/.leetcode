/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 * 使用栈的形式
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        if(s.size() % 2 != 0) return 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                myStack.push(s[i]);
                continue;
            }
            switch (s[i])
            {
                case ')':
                    if(myStack.empty() || myStack.top() != '(') return false;
                    myStack.pop();
                    break;
                case ']':
                    if(myStack.empty() || myStack.top() != '[') return false;
                    myStack.pop();
                    break;
                case '}':
                    if(myStack.empty() || myStack.top() != '{') return false;
                    myStack.pop();
                    break;
            }
        }
        if(myStack.empty()) return true;
        return false;
    }
};
// @lc code=end

