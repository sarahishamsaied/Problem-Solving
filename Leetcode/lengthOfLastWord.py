def lengthOfLastWord(s):
    return s.strip().split(" ")[-1]

if __name__ == '__main__':
    s = "Hello World"
    print(lengthOfLastWord(s))