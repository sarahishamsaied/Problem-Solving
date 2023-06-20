class Solution:
    def sortedSquares(self, nums):
        result = sorted([i*i for i in nums])
        return result
    
print(Solution().sortedSquares([-4,-1,0,3,10]))
