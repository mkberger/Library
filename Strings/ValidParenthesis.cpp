// https://leetcode.com/problems/valid-parentheses/description/
#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (auto x : s){
            if (x == '(' || x == '[' || x == '{') {
                stack.push(x);
            }
            else if (x == ')') {
                if(stack.empty() || stack.top() != '(') {
                    return false;
                }
                stack.pop();
            }
            else if (stack.empty() || x == ']') {
                if(stack.empty() || stack.top() != '[') {
                    return false;
                }
                stack.pop();
            }
            else if (x == '}') {
                if(stack.empty() || stack.top() != '{') {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};
