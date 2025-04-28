import ctypes

SIZE = 5
ArrayType = ctypes.c_int * SIZE  # Fixed size array in heap
arr = ArrayType()

for i in range(SIZE):
    arr[i] = i * 2

for val in arr:
    print(val, end=" ")
