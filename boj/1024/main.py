n, l = map(int, input().split())

# case with start 0
if sum(range(l)) == n:
    for i in range(l):
        print(i, end=" ")
    exit()

s = 0
ans_is_exist = False

for i in range(l, 100+1):
    s = (1 + i) * i // 2
    if n - s < 0:
        break
    ans_is_exist = ((n - s) % i) == 0
    if ans_is_exist:
        l = i
        break

if ans_is_exist:
    start = (n - s) // l
    for i in range(start+1, start+l+1):
        print(i, end=" ")
else:
    print(-1)
