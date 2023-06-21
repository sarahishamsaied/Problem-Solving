import re
class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # Clean the string
        s = s.lower()
        s = re.sub('[^a-z0-9$]', '', s)
        # Check if palindrome
        for i in range(len(s)//2):
            if(s[i] != s[len(s)-1-i]):
                return False
        return True
if __name__ == '__main__':
    s = "A man, a plan, a canal: Panama"
    print(Solution().isPalindrome(s))