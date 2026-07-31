class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)

        for word in strs:
            sort = "".join(sorted(word))
            res[sort].append(word)
        return list(res.values())
        