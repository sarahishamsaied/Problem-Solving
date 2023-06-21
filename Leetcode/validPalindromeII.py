class Solution(object):
    def validPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        for i in range(len(s)//2):
            if(s[i] != s[len(s)-i-1]):
                return self.isPalindrome(s, i) or self.isPalindrome(s, len(s)-i-1)
        return True
    def isPalindrome(self, s, index):
        for i in range(len(s)//2):
            if(i == index):
                continue
            if(s[i] != s[len(s)-i-1]):
                return False
        return True