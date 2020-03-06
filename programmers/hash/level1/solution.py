from collections import defaultdict


def solution(participant, completion):
    completed = defaultdict(int)
    for p in participant:
        completed[p] += 1
    for c in completion:
        completed[c] -= 1

    for (k, v) in completed.items():
        if v == 1:
            return k