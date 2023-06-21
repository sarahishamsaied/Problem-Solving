class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        zerosCount = nums.count(0)
        for i in range(zerosCount):
            nums.remove(0)
            nums.append(0)
        return nums
    def moveXeroes2(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        zerosCount = nums.count(0)
        for i in range(zerosCount):
            nums.remove(0)
            nums.append(0)
        return nums
if __name__ == '__main__':
    nums = [0,1,0,3,12]
    print(Solution().moveZeroes(nums))
