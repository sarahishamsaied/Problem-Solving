class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        ans = []
        for i in range(numRows):
            currentRow = []
            for j in range(i+1):
                if(j == 0 or j == i):
                    currentRow.append(1)
                else:
                    currentRow.append(ans[i-1][j-1] + ans[i-1][j])
            ans.append(currentRow)
        return ans