from collections import deque

def solution(prices):
    answer = [0] * len(prices)
    q = deque(prices)
    i = 0
    while q:
        v = q.popleft()
        for j, x in enumerate(q):
            if x < v:
                answer[i] = j + 1
                break
        if answer[i] == 0:
            answer[i] = j + 1
        i += 1
    answer[-1] = 0
    return answer