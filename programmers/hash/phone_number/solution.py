def solution(phone_book):
    phone = {}
    for x in phone_book:
        phone[x] = 1
    for x in phone_book:
        for i in range(len(x)):
            if x[:i] in phone:
                return False
    return True