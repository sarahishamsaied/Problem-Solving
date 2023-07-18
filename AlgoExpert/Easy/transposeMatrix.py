def transposeMatrix(matrix):
    newMatrix = [[0 for i in range(len(matrix))] for j in range(len(matrix[0]))]
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            newMatrix[j][i] = matrix[i][j]
    matrix = newMatrix       
    return matrix


if __name__ == "__main__":
    matrix = [[1, 2, 3], [4, 5, 6]]
    print(transposeMatrix(matrix))