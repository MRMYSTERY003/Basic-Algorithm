
def findMinDiff(arr, n, m):
    if (m == 0 or n == 0):
        return 0
    arr.sort()
    print(f"list after sorting: {arr}")

    if (n < m):
        return -1

    min_diff = arr[n-1] - arr[0]
    print(f"the first min difference : {min_diff}")

    for i in range(len(arr) - m + 1):
        print(
            f"min diff = {min_diff}:  i = {i} m = {m} arr[i+m-1] : {arr[i+m-1]} - arr : {arr[i]} ")
        min_diff = min(min_diff, arr[i + m - 1] - arr[i])

    return min_diff


if __name__ == "__main__":
    arr = [2, 5, 3, 1, 9]
    m = 3  # Number of students
    n = len(arr)
    print(f"the actual list : {arr}")
    print("Minimum difference is", findMinDiff(arr, n, m))
