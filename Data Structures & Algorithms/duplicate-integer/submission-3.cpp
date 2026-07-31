class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
  std::unordered_set<int> ref;
  for (int i = 0; i < nums.size(); i++) {
    if (ref.contains(nums[i])) {
      return true;
    }
    ref.emplace(nums[i]);
  }
  return false;
    }
};