class Solution {
   public:
    int evalRPN(std::vector<std::string>& tokens) {
        stack<int> nums;

        for (string token : tokens) {
            if (!(token == "+" || token == "-" || token == "/" || token == "*")) {
                nums.push(stoi(token));

            } else {
                int top = nums.top();
                nums.pop();
                int second = nums.top();
                nums.pop();
                if (token == "+")
                    nums.push(top + second);
                else if (token == "-")
                    nums.push(second - top);
                else if (token == "*")
                    nums.push(second * top);
                else if (token == "/")
                    nums.push(second / top);
            }
        }
        return nums.top();
    }
};
