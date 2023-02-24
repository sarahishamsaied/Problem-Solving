def twoSum(nums,target):
    numsMap = {}
    for i in range(len(nums)):
        complement = target - nums[i]
        if(numsMap.get(complement)!=None):
            return [nums[i],complement]
        numsMap[nums[i]] = i
