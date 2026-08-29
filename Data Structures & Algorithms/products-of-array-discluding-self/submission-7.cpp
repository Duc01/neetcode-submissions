class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // do prefix
        // do postfix
        // multiplly prefix and postfix
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> postfix(n, 1);
        vector<int> out(n, 1);

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        for (int i = n-2; i >= 0; i--) {
            postfix[i] = postfix[i+1] * nums[i+1];
        }

        for (int i = 0; i < n ; i++) {
            out[i] = prefix[i] * postfix[i];
        }

        

        // vector<int> out(n, 1);
        // for (int i = 0; i < n; i++) {
        //     out[i] = prefix[i] * postfix[i];

        return out;
    }
};