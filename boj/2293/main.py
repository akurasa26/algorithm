import sys
from collections import defaultdict

input = sys.stdin.readline
n, k = map(int, input().split())


cases = defaultdict(lambda: 0)
nums = [int(input()) for _ in range(n)]

for num in nums:
    cases[num] += 1
    for i in range(num, k + 1):
        cases[i] += cases[i - num]

print(cases[k])
