def removeDuplicates(nums):
    nums[:] = list(set(nums))
    return len(set(nums))

if __name__ == '__main__':
    nums = [1, 1, 2]
    print(removeDuplicates([1, 1, 2]))