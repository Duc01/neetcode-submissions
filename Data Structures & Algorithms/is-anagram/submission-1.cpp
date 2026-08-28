class Solution {
   public:
    bool isAnagram(string s, string t) {
        int lenS = s.size(), lenT = t.size();
        if (lenS != lenT) return false;
        unordered_map<char, int> smap, tmap;
        for (int i = 0; i < lenS; i++) {
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        if (smap == tmap) return true;
        else return false;
    }
};