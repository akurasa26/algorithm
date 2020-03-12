class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        phone = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"
        }
        before = []
        if not digits:
            return before
        for c in phone[digits[0]]:
            before.append(c)

        for n in digits[1:]:
            new_l = []
            for c in phone[n]:
                for nc in before:
                    new_l.append(nc + c)
            before = new_l

        return before