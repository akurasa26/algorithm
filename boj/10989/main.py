import sys
import collections
h = collections.defaultdict(int)

input = sys.stdin.readline
n = int(input())

for _ in range(n):
    h[int(input())] += 1


for i in range(1, 10000+1):
    for _ in range(h[i]):
        print(i)
