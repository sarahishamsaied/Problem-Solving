class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        frequentMap = {}
        for i in nums:
            if i in frequentMap:
                frequentMap[i] += 1
            else:
                frequentMap[i] = 1  
        topKFrequent = sorted(frequentMap.items(), key=lambda x:x[1], reverse=True)
        topKFrequent = [i[0] for i in topKFrequent]
        return topKFrequent[:k]


nums = [1,1,1,2,2,3]
k = 2
print(Solution().topKFrequent(nums,k))
