class Solution(object):
    def maxNumberOfBalloons(self, text):
        """
        :type text: str
        :rtype: int
        """
        balloon = {'b':0, 'a':0, 'l':0, 'o':0, 'n':0}
        for i in range(len(text)):
            if(text[i] in balloon):
                balloon[text[i]] += 1
        balloon['l'] = balloon['l']//2
        balloon['o'] = balloon['o']//2
        return min(balloon.values())
    
    


if __name__ == '__main__':
    text = "nlaebolko"
    print(Solution().maxNumberOfBalloons(text))