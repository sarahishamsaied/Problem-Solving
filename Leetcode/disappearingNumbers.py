class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        numsSet = set(nums)
        ans = []
        for i in range(1, len(nums)+1):
            if(i not in numsSet):
                ans.append(i)
        return ans



if __name__ == '__main__':
    nums = [4,3,2,7,8,2,3,1]
    print(Solution().findDisappearedNumbers(nums))