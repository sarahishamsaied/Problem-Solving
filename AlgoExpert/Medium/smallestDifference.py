def smallestDifference(arrayOne, arrayTwo):
    a=0
    b = 0
    arrayOne.sort()
    arrayTwo.sort()
    currentDiff = float("inf")
    smallestPair = []
    minDiff = float("inf")
    while (a<len(arrayOne) and b < len(arrayTwo)):
        currentDiff = abs(arrayOne[a] - arrayTwo[b])
        minDiff = min(currentDiff, minDiff)
        if(minDiff == currentDiff):
            smallestPair = [arrayOne[a], arrayTwo[b]]
        if(arrayOne[a] < arrayTwo[b]):
            a+=1
        elif(arrayTwo[b] < arrayOne[a]):
            b+=1
        else:
            return [arrayOne[a], arrayTwo[b]]


    return smallestPair
if __name__ == "__main__":
    arrayOne = [-1, 5, 10, 20, 28, 3]
    arrayTwo = [26, 134, 135, 15, 17]
    print(smallestDifference(arrayOne, arrayTwo))