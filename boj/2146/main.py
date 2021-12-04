import queue
import sys
sys.setrecursionlimit(10**6)
m = []

n = int(input())
for _ in range(n):
    m.append(list(map(int, input().split())))

c = 20000

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

min_len = 10000


def check(x, y):
    global m, c, n
    if x < 0 or y < 0 or x >= n or y >= n:
        return
    if m[x][y] == 1:
        m[x][y] = c
        for i in range(4):
            check(x + dx[i], y + dy[i])


def bfs(sx, sy):
    global min_len
    q = queue.Queue(201)
    q.put([sx, sy])
    island = m[sx][sy]
    checker = [-1] * 10001
    checker[sx*n+sy] = 0
    m[sx][sy] = 0
    while not q.empty():
        [tx, ty] = q.get()
        if m[tx][ty] > 10000:
            continue

        if min_len < checker[tx*n+ty]:
            continue

        for i in range(4):
            x = tx + dx[i]
            y = ty + dy[i]
            if x < 0 or y < 0 or x >= n or y >= n:
                continue
            if m[x][y] != island and m[x][y] != 0:
                if min_len > checker[tx*n+ty]:
                    min_len = checker[tx*n+ty]
            elif m[x][y] == 0 and checker[x*n+y] == -1:
                q.put([x, y])
                checker[x*n+y] = checker[tx*n+ty] + 1

    m[sx][sy] = island


def solve():
    global c
    for i in range(n):
        for j in range(n):
            if m[i][j] == 1:
                c += 1
                check(i, j)

    for i in range(n):
        for j in range(n):
            if m[i][j]:
                bfs(i, j)

    print(min_len)


solve()