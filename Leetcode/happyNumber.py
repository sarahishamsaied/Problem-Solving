import math
def happyNumber(n):
    sum = 0
    flag = False
    n = str(n)
    while(True):
        for i in n:
            sum+=i**2
        if(sum == 1):
            flag = True
            break
        
        

print(happyNumber(19))
