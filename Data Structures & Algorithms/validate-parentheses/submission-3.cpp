class Solution {
public:
    bool isValid(string s) {
       stack<char> brackets;
       map<char, char> pairs;
       pairs[')'] = '(';
       pairs['}'] = '{';
       pairs[']'] = '[';


        for (const auto& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                brackets.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                if (brackets.empty()) return false;
                if (brackets.top() != pairs[c]) return false;
                else brackets.pop();
            }

        } 

       return brackets.empty();
    }
};