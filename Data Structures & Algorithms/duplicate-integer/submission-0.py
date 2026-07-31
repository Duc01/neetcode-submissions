class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        for i in nums:
            limitIndex = nums.index(i)
            for j in nums[limitIndex+1:]:
                if i == j:
                    return True
        return False