class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqs;
        for (int elem : nums) {
            freqs[elem]++;
        }
        // [0 -> [elem, elem]]
        int n = nums.size();
        vector<vector<int>> buckets(n+1);
        for (auto &[key, freq]: freqs) {
            buckets[freq].push_back(key);
        }

        vector<int> result;
        for (int i = n; i <= n && result.size() < k; --i) {
            for (auto elem: buckets[i]) {
                result.push_back(elem);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;

    }
};
