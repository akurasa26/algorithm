def solution(bridge_length, weight, truck_weights):
    sec = 0
    on_weight = 0
    pending = []
    while truck_weights or on_weight:
        sec += 1
        if truck_weights and on_weight + truck_weights[0] <= weight:
            t = truck_weights.pop(0)
            on_weight += t
            pending.append(t)
        else:
            pending.append(0)

        if sec >= bridge_length:
            on_weight -= pending[sec - bridge_length]

    return sec + 1