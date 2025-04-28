size = int(input("Enter size of array: "))
arr = [0] * size  # Stack-like behavior, but Python uses heap internally

for i in range(size):
    arr[i] = i * 5

print(arr)
