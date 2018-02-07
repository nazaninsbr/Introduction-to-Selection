matrix1 = [[1,2], [3,4], [5,6]]
matrix2 = [[row[i] for row in matrix1] for i in range(2)]
print(matrix1)
print(matrix2)
