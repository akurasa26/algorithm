class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""

        lcp = strs[0]
        if not lcp:
            return ""
        min_l = len(lcp)
        for s in strs[1:]:
            min_l = min(len(s), min_l, len(lcp))
            for i, c in enumerate(s):
                if i >= min_l:
                    break
                if c != lcp[i]:
                    lcp = s[:i]
                    break

            if not lcp:
                return ""

        return lcp[:min_l]