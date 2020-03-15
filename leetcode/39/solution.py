class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        def rec(cand,target,solu):
            if len(cand)!=0 and target>0:
                for i in range(len(cand)):
                    if target - cand[i]==0:
                        temp = solu+[cand[i]]
                        temp.sort()
                        ans.append(temp)
                    elif target - cand[i]>0:
                        rec(cand,target - cand[i],solu+[cand[i]])
        rec(candidates,target,[])
        return list(set(tuple(i) for i in ans))