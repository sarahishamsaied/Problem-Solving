class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        myDict = {}
        for i in magazine:
            if i in myDict:
                myDict[i] += 1
            else:
                myDict[i] = 1
        for i in ransomNote:
            if i not in myDict:
                return False
            else:
                myDict[i]-=1
                if myDict[i] < 0:
                    return False
        return True


