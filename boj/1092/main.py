import sys
input = sys.stdin.readline


def solution():
    n = int(input())
    cranes = list(map(int, input().split()))
    m = int(input())
    boxes = list(map(int, input().split()))
    cnt = 0

    cranes.sort(reverse=True)
    boxes.sort(reverse=True)
    crane_pos = [0] * n
    box_check = [True] * m
    checked = 0
    if cranes[0] < boxes[0]:
        print(-1)
        return
    else:
        while checked < m:
            for i in range(n):
                for j in range(crane_pos[i], m):
                    if box_check[j] and cranes[i] >= boxes[j]:
                        crane_pos[i] += 1
                        box_check[j] = False
                        checked += 1
                        break
                    crane_pos[i] += 1
            cnt += 1
        print(cnt)

solution()