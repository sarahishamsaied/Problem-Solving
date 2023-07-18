import random
class Codec:
    def __init__(self):
        self.encodeMap = {}
        self.decodeMap = {}
        self.base = 'http://tinyurl.com/'
    def encode(self, longUrl):
        """Encodes a URL to a shortened URL.
        
        :type longUrl: str
        :rtype: str
        """
        if(longUrl not in self.encodeMap):
            shortUrl = self.base + str(random.randint(0,965))
            self.encodeMap[longUrl] = shortUrl
            self.decodeMap[shortUrl] = longUrl
            return shortUrl
        else:
            return self.encodeMap[longUrl]
       

    def decode(self, shortUrl):
        """Decodes a shortened URL to its original URL.
        
        :type shortUrl: str
        :rtype: str
        """
        return self.decodeMap[shortUrl]

# Your Codec object will be instantiated and called as such:

codec = Codec()
shortened = codec.encode('https://leetcode.com/problems/design-tinyurl')
print(shortened)
print(codec.decode(shortened))
