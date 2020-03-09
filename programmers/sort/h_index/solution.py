def solution(citations):
    for i in range(len(citations), -1, -1):
        if len(list(filter(lambda x: x >= i, citations))) >= i:
            return i
    return 0