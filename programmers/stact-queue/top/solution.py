def solution(heights):
    answer = [0] * len(heights)

    for i, h in enumerate(heights):
        for j in range(i, -1, -1):
            if heights[j] > h:
                answer[i] = j + 1
                break

    return answer