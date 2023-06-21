class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        minLen = min(len(word1), len(word2))
        result = ""
        for i in range(minLen):
            result += word1[i]
            result += word2[i]
        if(len(word1) > len(word2)):
            result += word1[minLen:]
        else:
            result += word2[minLen:]
        return result
if __name__ == '__main__':
    word1 = "ab"
    word2 = "pqrs"
    print(Solution().mergeAlternately(word1, word2))