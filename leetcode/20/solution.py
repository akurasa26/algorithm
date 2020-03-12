class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for c in s:
            if c in '({[':
                stack.append(c)
            else:
                if not stack:
                    return False
                l = stack.pop()
                if l + c not in ["{}", "[]", "()"]:
                    return False
        return not stack
