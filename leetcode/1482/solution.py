class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        answer = []
        for i in nums:
            count = 0
            for j in nums:
                if j < i:
                    count += 1
            answer.append(count)
        return answer
