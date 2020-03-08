def solution(priorities, location):
    prints = list(zip(priorities, range(len(priorities))))
    answer = 0
    print(prints)
    while prints:
        (v, i) = prints[0]
        is_print = True
        for (x, j) in prints[1:]:
            if x > v:
                is_print = False
        if is_print:
            answer += 1
            if i == location:
                return answer
            prints.pop(0)
        else:
            prints.append(prints.pop(0))

    return answer