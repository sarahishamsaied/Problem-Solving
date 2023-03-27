def isomorphicString(s, t):
    char_map = {}
    if len(s) != len(t):
        return False
    for i in range(len(s)):
        if s[i] in char_map:
            if char_map[s[i]] != t[i]:
                return False
        else:
            if t[i] in char_map.values():
                return False
            char_map[s[i]] = t[i]
    return True


print(isomorphicString("egg","add"))
print(isomorphicString("foo","bar"))
print(isomorphicString("paper","title"))
print(isomorphicString("aaaa","aaaa"))
print(isomorphicString("bad","bed"))
