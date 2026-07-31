class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in nums:
            index = nums.index(i)
            iter = 0
            for j in nums[index+1:]:
                iter += 1
                if i + j == target:
                    return [index, index + iter]
        