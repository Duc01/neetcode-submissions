#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        /*
        * {"key", vector<string>}
        */
        vector<vector<string>> res;
        unordered_map<string, vector<string>> keymap;
        for (int i = 0; i < n; i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            keymap[key].emplace_back(strs[i]);
        }

        for (const auto& [key, value] : keymap) {
            res.emplace_back(value);
        }
        return res;
    }
};