class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> tempStack;
        vector<int> res(n, 0);

        for (int i = 1; i < n; i++) {
            // if (temperatures[i -1] > temperatures[i]) {
            //     // better to put index since values are easily accesible
            //     tempStack.push(i-1);
            //     continue;
            // }
            tempStack.push(i-1);

           while (!tempStack.empty() && temperatures[tempStack.top()] < temperatures[i]) {
                res[tempStack.top()] = i - tempStack.top();
                tempStack.pop();
           }
        }
        return res;
    }
};