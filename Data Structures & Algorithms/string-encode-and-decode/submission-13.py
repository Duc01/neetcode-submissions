class Solution:

    def encode(self, strs: List[str]) -> str:
        if strs == []:
            return ""
        elif strs == [""]:
            return "."
        out = '.'.join(strs)
        return out

    def decode(self, s: str) -> List[str]:
        if s == "":
            return []
        elif s == ".":
            return [""]
        out = s.split(".")
        return out