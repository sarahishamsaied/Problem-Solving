def moveElementToEnd(array, toMove):
    # Write your code here.
    array.count(toMove)
    for i in range(array.count(toMove)):
        array.remove(toMove)
        array.append(toMove)
    return array


if __name__ == "__main__":
    array = [2, 1, 2, 2, 2, 3, 4, 2]
    toMove = 2
    print(moveElementToEnd(array, toMove))

           
