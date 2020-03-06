from collections import defaultdict

def solution(clothes):
    fashion = defaultdict(list)
    for c in clothes:
        fashion[c[1]].append(c[0])
    print(fashion)
    answer = 1
    for k, v in fashion.items():
        count = len(v) + 1
        answer *= count
    return answer - 1