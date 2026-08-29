class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqs;
        vector<int> res;
        for (int num : nums) {
            freqs[num]++;
        }

        int n = nums.size();
        vector<vector<int>> groups(n + 1);
        for (const auto& [num, freq] : freqs) {
            groups[freq].emplace_back(num);
        }
        // groups = {1: [2, 5, 9], 2: [1, 7, 12], ...}
        for (int i = n; res.size() < k; --i) {
            for (auto elem : groups[i]) {
                res.emplace_back(elem);
                if (res.size() == k) {
                    return res;
                }
            }
        }

        return res;
    }
};
