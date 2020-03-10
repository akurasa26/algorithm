class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        y = len(grid)
        x = len(grid[0])
        sums = []
        for _ in range(y):
            sums.append([0] * (x))

        if not grid:
            return 0
        if len(grid) == 0 or len(grid[0]) == 0:
            return 0

        sums[0][0] = grid[0][0]

        for i in range(1, x):
            sums[0][i] = sums[0][i - 1] + grid[0][i]

        for i in range(1, y):
            sums[i][0] = sums[i - 1][0] + grid[i][0]

        for i in range(1, y):
            for j in range(1, x):
                sums[i][j] = min(sums[i - 1][j], sums[i][j - 1]) + grid[i][j]

        return sums[y - 1][x - 1]

