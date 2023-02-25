def longestCommonPrefix(strs):
    prefix = strs[0]
    for i in range(1,len(strs)):
        while strs[i].find(prefix) !=0:
            prefix = prefix[:len(prefix)-1]
    return prefix

