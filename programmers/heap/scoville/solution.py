import heapq

def check(scoville, K):
    return all(s >= K for s in scoville)

def solution(scoville, K):
    count = 0
    heap = scoville
    heapq.heapify(heap)

    while heap and not check(heap, K):
        v1 = heapq.heappop(heap)
        if heap:
            v2 = heapq.heappop(heap)
        else:
            heapq.heappush(heap, v1)
            break
        new_scoville = v1 + (v2 * 2)
        heapq.heappush(heap, new_scoville)
        count += 1

    if check(heap, K):
        return count
    else:
        return -1