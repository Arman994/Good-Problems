class Solution {
public:
    bool isValid(string str) {
        stack<char> s;

        for (char ch : str) {
            if (ch == '(' || ch == '{' || ch == '[') {
                s.push(ch);
            } else {
                if (s.empty()) {
                    return false; 
                }
                if ((ch == ')' && s.top() == '(') || 
                    (ch == '}' && s.top() == '{') || 
                    (ch == ']' && s.top() == '[')) {
                    s.pop(); 
                } else {
                    return false; 
                }
            }
        }

        return s.empty();
    }
};