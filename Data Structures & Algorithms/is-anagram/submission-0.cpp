class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> sampleS;
        unordered_map<char, int> sampleT;
        for (int i = 0; i < s.size(); i++) {
            sampleS[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++) {
            sampleT[t[i]]++;
        }
        if (sampleS == sampleT) return true;
        return false;
    }
};
