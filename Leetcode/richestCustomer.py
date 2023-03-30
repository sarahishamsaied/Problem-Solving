def maximumWealth(accounts):
    max = 0
    for i in range(len(accounts)):
        if max < sum(accounts[i]):
            max = sum(accounts[i])
    return max
print(maximumWealth([[1,2,3],[3,2,1]]))