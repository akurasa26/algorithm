class Solution:
    def row(self, row: List[int], rowIndex, goal):
        l = [1]
        for i, v in enumerate(row):
            if i == 0:
                continue
            l.append(v + row[i - 1])
        l.append(1)
        if rowIndex == goal:
            return l
        else:
            return self.row(l, rowIndex + 1, goal)

    def getRow(self, rowIndex: int) -> List[int]:
        if rowIndex == 0:
            return [1]
        return self.row([1], 1, rowIndex)
