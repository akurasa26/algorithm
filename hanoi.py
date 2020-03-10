def move(i, start, to):
    print('{}를 {}에서 {}'.format(i, start, to))

def hanoi(i, start, to, via):
    if i == 1:
        move(1, start, to)
    else:
        hanoi(i-1, start, via, to)
        move(i, start, to)
        hanoi(i-1, via, to, start)

hanoi(10 , 'A', 'C', 'B')

