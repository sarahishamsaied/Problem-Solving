def isValidSubsequence(array, sequence):
    subsPtr = 0
    for i in range(len(array)):
        if subsPtr == len(sequence):
            break
        if(sequence[subsPtr] == array[i]):
            subsPtr += 1
    return subsPtr == len(sequence)
    


