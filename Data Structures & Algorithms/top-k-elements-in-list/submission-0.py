class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = defaultdict(list)

        for num in nums:
            freq[num] = freq.get(num, 0) + 1
        
        sorted_keys = sorted(freq.keys(), key=lambda x: freq[x], reverse=True)
        return sorted_keys[:k]
        