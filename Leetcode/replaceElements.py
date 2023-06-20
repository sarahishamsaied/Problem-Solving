class Solution(object):
    def replaceElements(self, arr):
        """
        :type arr: List[int]
        :rtype: List[int]
        """
        max = -1
        for i in range(len(arr)-1, -1, -1):
            temp = arr[i]
            arr[i] = max
            if(temp > max):
                max = temp
            
        return arr
if __name__ == '__main__':
    arr = [17,18,5,4,6,1]
    print(Solution().replaceElements(arr))

print("flow".find("flow"))
