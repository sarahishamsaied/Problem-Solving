class MyHashSet(object):
    def __init__(self):
        self.hashSet = set()


    def add(self, key):
        """
        :type key: int
        :rtype: None
        """
        self.hashSet.add(key)
    
        

    def remove(self, key):
        """
        :type key: int
        :rtype: None
        """
        if(key in self.hashSet):
            self.hashSet.remove(key)
        else:
            return -1 
        

    def contains(self, key):
        """
        :type key: int
        :rtype: bool
        """
        return key in self.hashSet
        


# Your MyHashSet object will be instantiated and called as such:
# key=1
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)
# print(param_3)