/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    stack<int> Stack;
    stack<int> sup_stack;

    MinStack() {
        sup_stack.push(INT_MAX);
    }
    
    void push(int val) {
        Stack.push(val);
        sup_stack.push(min(val, sup_stack.top()));
    }
    
    void pop() {
        Stack.pop();
        sup_stack.pop();
    }
    
    int top() {
        return Stack.top();
    }
    
    int getMin() {
        return sup_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

