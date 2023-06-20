class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        compareMap = {}
        if(len(s) < len(t)):
            return False
        for i in range (len(s)):
            if(compareMap.get(s[i]) == None):
                compareMap[s[i]] = 1
            else:
                compareMap[s[i]] += 1
        for i in range(len(t)):
            if(compareMap.get(t[i]) == None):
                return False
            else:
                compareMap[t[i]] -= 1



if __name__ == '__main__':
    s = "car"
    t = "rat"
    print(Solution().isAnagram(s, t))