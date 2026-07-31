class Solution:

# If len = 0, out = "" If [""] then out = "\n"
    def encode(self, strs: List[str]) -> str:
        out = '\n'.join(strs)
        if strs == [""]:
            out = "\n"
        print(f"Encoded: {out}")
        return out

    def decode(self, s: str) -> List[str]:
        if len(s) == 0:
            return []
        elif len(s) == 1:
            return [""]
        out = re.split("\n", s)
        print(f"Decoded: {out}")
        return out
