class Solution:
    def __init__(self):
        self.l = []

    def generate_path(self, l, r, s):
        if l == 0 and r == 0:
            self.l.append(s)
            return
        if l > 0:
            self.generate_path(l - 1, r, s + "(")
        if l < r:
            self.generate_path(l, r - 1, s + ")")

    def generateParenthesis(self, n: int) -> List[str]:
        if not n:
            return self.l

        self.generate_path(n - 1, n, "(")

        return self.l
