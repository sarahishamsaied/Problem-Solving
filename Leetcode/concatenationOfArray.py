class Solution(object):
    def getConcatenation(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = nums + nums
        return ans
if __name__ == '__main__':
    nums = [1,2,1]
    print(Solution().getConcatenation(nums))
    nums = [1,3,2,1]
    print(Solution().getConcatenation(nums))