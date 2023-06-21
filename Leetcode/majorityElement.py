class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        occurrences = {}
        for i in range(len(nums)):
            if(nums[i] in occurrences):
                occurrences[nums[i]] += 1
            else:
                occurrences[nums[i]] = 1
        for key in occurrences:
            if(occurrences[key] > len(nums)/2):
                return key
if __name__ == '__main__':
    nums = [3,2,3]
    print(Solution().majorityElement(nums))