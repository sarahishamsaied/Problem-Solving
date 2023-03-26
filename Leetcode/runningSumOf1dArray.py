def runningSum(self, nums):
    runningSum = []
    for i in range(len(nums)):
        runningSum.append(sum(nums[:i+1]))
    return runningSum
