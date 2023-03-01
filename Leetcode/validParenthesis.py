def isValid(self,s: str) -> bool:
    myStack = []
    dict = {
        "}":"{",
        "]":"[",
        ")":"("
    }
    for i in s:
        if(i == "(" or i == "{" or i == "["):
            myStack.append(i)
        else:
            if(len(myStack) > 0):
                if(myStack[-1] != dict[i]):
                    return False
                myStack.pop()
            else: return False
    return len(myStack) == 0


