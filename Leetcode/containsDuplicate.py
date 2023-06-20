class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        currentNums = {}
        nums.sort()
        for i in range(len(nums)):
            if(currentNums.get(nums[i]) == None):
                currentNums[nums[i]] = 1
            else:
                currentNums[nums[i]] += 1
        for key in currentNums:
            if(currentNums[key] >= 2):
                return True
        return False
    
if __name__ == '__main__':
    nums = [3,3]
    print(Solution().containsDuplicate(nums))
                