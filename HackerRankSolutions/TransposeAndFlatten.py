import numpy as np


n, m = map(int, input().split())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)


my_array = np.array(matrix)


transpose_array = np.transpose(my_array)
print(transpose_array)


flatten_array = my_array.flatten()
print(flatten_array)