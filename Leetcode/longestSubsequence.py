class Solution:
    def longestConsecutive(self, nums) -> int:
        numsSet = set(nums)
        numsSet = sorted(numsSet)
        print(numsSet)
        longestArr = [0]
        longest = 0
        if(len(numsSet) == 0):
            return 0
        for i in range(1, len(numsSet)):
            if(numsSet[i] - numsSet[i-1] == 1):
                longest += 1
            else:
                longestArr.append(longest)
                longest = 0
        longestArr.append(longest)
        return max(longestArr)+1
nums = [100,4,200,1,3,2]
print(Solution().longestConsecutive(nums))