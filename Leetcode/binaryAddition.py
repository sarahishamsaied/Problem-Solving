def addBinary(a,b):
    carry = 0
    res=0
    resultString = ""
    if len(a) > len(b):
        b = "0"*(len(a)-len(b))+b
    else:
        a = "0"*(len(b)-len(a))+a
    for index,(i,j) in enumerate(zip(reversed(a),reversed(b))):
        res = int(i)+int(j)+carry
        if res > 1:
            carry = 1
            res = res%2
        else:
            carry = 0
        resultString = str(res)+resultString
    return resultString if carry == 0 else str(carry)+resultString
print(addBinary("0","0"))