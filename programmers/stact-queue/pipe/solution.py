def solution(arrangement):
    answer = 0
    l = 0
    for i, p in enumerate(arrangement):
        if i == 0:
            l += 1
            continue
        if p == '(':
            l += 1
        else:
            l -= 1
            if arrangement[i - 1] == '(':
                answer += l
            else:
                answer += 1

    return answer