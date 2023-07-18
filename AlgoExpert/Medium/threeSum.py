# Time Complexity: O(n^2)
# Space Complexity: O(n)
def threeNumberSum(array, targetSUm):
    # sort the array in ascending order
    array.sort()
    # create a list to store the triplets
    nums = []
    left = 0
    right = 0
    for i in range (len((array))-2):
        left = i+1
        right = len(array)-1
        while(left<right):
            currentSum = array[i] + array[left] + array[right]
            if(currentSum == targetSUm):
                nums.append([array[i], array[left], array[right]])
                right-=1
                left+=1
            elif(currentSum > targetSUm):
                right -= 1
            if(currentSum < targetSUm):
                left += 1
    return nums

if __name__ == "__main__":
    array = [12, 3, 1, 2, -6, 5, 0, -8, -1, 6]
    print(threeNumberSum(array,0))
