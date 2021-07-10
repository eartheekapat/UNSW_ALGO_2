arr = [3, 1, 2, 6, 4]

sorted_arr = sorted(arr)

# array to store k-s
diff_arr = []
# array to store m^2 - p^2

n = len(arr)
n_arr = int((n*(n-1))/2)

for arr_i in range(n_arr):
    for i in range(n-1):
        for j in range(i+1, n):
            diff_arr[arr_i] = sorted_arr[j] - sorted_arr[i]

print(diff_arr)
