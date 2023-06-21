class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        compareMap = {}
        for i in range (len(s)):
            if(compareMap.get(s[i]) == None):
                compareMap[s[i]] = 1
            else:
                compareMap[s[i]] += 1
        for i in range(len(t)):
            if(compareMap.get(t[i]) == None or compareMap[t[i]] == 0):
                return False
            else:
                compareMap[t[i]] -= 1
        for key in compareMap:
            if(compareMap[key] != 0):
                return False
        return True



if __name__ == '__main__':
    s = "car"
    t = "rat"
    print(Solution().isAnagram(s, t))