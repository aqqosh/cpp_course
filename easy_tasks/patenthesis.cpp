#include <iostream>
#include <stack>

using namespace std;

int main() {
    class Solution {
    public:
        bool isValid(string s) {
            
            stack<char> my_stack;
            
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                    my_stack.push(s[i]);
                }
                else if (s[i] == ')') {
                    if (!my_stack.empty() && my_stack.top()=='(') {
                        my_stack.pop();
                    }
                    else {
                        return false;
                    }
                }
                else if (s[i] == ']') {
                    if (!my_stack.empty() && my_stack.top()=='[') {
                        my_stack.pop();
                    }
                    else {
                        return false;
                    }
                }
                else if (s[i] == '}') {
                    if (!my_stack.empty() && my_stack.top()=='{') {
                        my_stack.pop();
                    }
                    else {
                        return false;
                    }
                }
            }
            if (!my_stack.empty()) {
                return false;
            }
            return true;
        }
    };
}