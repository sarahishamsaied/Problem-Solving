def moveElementToEnd(array, toMove):
    # Write your code here.
    j = len(array)-1
    i = 0
    while(i<j):
        if(array[i] == toMove and array[j] != toMove):
            array[i], array[j] = array[j], array[i]
            i+=1
            j-=1
        elif(array[i] == toMove and array[j] == toMove):
            j-=1
        else:
            i+=1


if __name__ == "__main__":
    array = [2, 1, 2, 2, 2, 3, 4, 2]
    toMove = 2
    print(moveElementToEnd(array, toMove))

           
