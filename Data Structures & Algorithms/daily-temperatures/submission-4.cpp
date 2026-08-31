class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // loop over all days
            // store indexes of days on a stack
            // if day with higher temp is found
                // append difference of indexes at the index the elem was located to result vector
                // remove element from stack
        vector<int> result(temperatures.size(), 0);
        stack<int> days;

        for (int i = 0; i < temperatures.size(); i++) {
            // if (days.empty()) {
            //     days.push(i);
            //     continue;
            // }

            while (!days.empty() && temperatures[days.top()] < temperatures[i]) {
                result[days.top()] = i - days.top();
                days.pop();
            }
            days.push(i);
            
        } 

        return result;
    }
};
