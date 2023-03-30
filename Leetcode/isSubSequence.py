class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s) > len(t):return False
        if len(s) == 0:return True
        subsCount = 0
        for i in range (len(t)):
            if(subsCount <= len(s) -1 and s[subsCount] == t[i]):
                subsCount += 1
        return subsCount == len(s)

print(Solution().isSubsequence("aecd","abcdef"))
print(Solution().isSubsequence("axc","ahbgdc"))

        