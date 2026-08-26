class Solution {
   public:
    int evalRPN(std::vector<std::string>& tokens) {
        int ans = INT_MIN;
        std::stack<int> stck;
        for (std::string token : tokens) {
            if (!(token == "+" || token == "-" || token == "*" || token == "/")) {
                stck.push(std::stoi(token));
            } else {
                int val1 = stck.top();
                stck.pop();
                int val2 = stck.top();
                stck.pop();
                if (token == "+")
                    stck.push(val1 + val2);
                else if (token == "-")
                    stck.push(val2- val1);
                else if (token == "/")
                    stck.push(val2 / val1);
                else if (token == "*")
                    stck.push(val1 * val2);
            }
        }
        return stck.top();
    }
};
