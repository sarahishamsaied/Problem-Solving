class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        patternMap = {}
        wordsArr = s.split()
        if(len(pattern) != len(wordsArr)):
            return False
        for i in range(len(pattern)):
            if (pattern[i] in patternMap):
                if(patternMap[pattern[i]] != wordsArr[i]):
                    return False
            else:
                if(wordsArr[i] in patternMap.values()):
                    return False;
                patternMap[pattern[i]] = wordsArr[i]
        return True

pattern = "aaa"
s = "aa aa aa aa"
print(Solution().wordPattern(pattern,s));