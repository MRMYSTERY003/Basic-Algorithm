
def get_max_sub_sum(li):
    maxsum = li[0]
    curr_sum = 0
    for i in li:
        if curr_sum < 0:
            curr_sum = 0
        curr_sum += i
        print("furrent sum", curr_sum)
        maxsum = max(maxsum, curr_sum)
        print("max sum ", maxsum)
    print("final sum", maxsum)
    return maxsum


li = [1, 2, 3, 4, -5]

print(get_max_sub_sum(li))
