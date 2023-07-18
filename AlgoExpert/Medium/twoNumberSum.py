def twoNumberSum(array, targetSum):
    # Write your code here.
    hashMap = {}
    for i in range(len(array)):
        complement = targetSum - array[i]
        if(complement in hashMap):
            return [complement, array[i]]
        else:
            hashMap[array[i]] = True
    return []


if __name__ == "__main__":
    array = [3, 5, -4, 8, 11, 1, -1, 6]
    targetSum = 10
    print(twoNumberSum(array, targetSum))