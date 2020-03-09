def solution(numbers):
    numbers = list(map(str, numbers))
    return str(int(''.join(sorted(numbers, key=lambda x: x*3, reverse=True))))