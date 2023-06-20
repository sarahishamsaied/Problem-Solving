class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        anagramsMap = {}
        ans = []
        for i in range(len(strs)):
            currentStr = strs[i]
            sortedStr = "".join(sorted(currentStr))
            anagramsMap[sortedStr] = anagramsMap.get(sortedStr, []) + [currentStr]
        for key in anagramsMap:
            ans.append(anagramsMap[key])
        return ans
if __name__ == '__main__':
    strs = ["eat","tea","tan","ate","nat","bat"]
    print(Solution().groupAnagrams(strs))
    strs = [""]
    print(Solution().groupAnagrams(strs))
    strs = ["a"]
    print(Solution().groupAnagrams(strs))
    strs = ["a",""]
    print(Solution().groupAnagrams(strs))