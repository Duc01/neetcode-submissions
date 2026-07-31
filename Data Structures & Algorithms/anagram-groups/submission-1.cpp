#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end()); // Anagrams share the same sorted key
            groups[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& pair : groups) {
            result.push_back(move(pair.second));
        }

        return result;
    }
};