class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_set<int> past;
      for (int num : nums) {
        if (past.contains(num)) return true;
        past.insert(num);
      }
      return false;
    }
};