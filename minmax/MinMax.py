class minmaxpair:  # creating a class which holds the min max pair
    def __init__(self):
        self.min = 0
        self.max = 0


# we can specify the data type of argument in function and the -> symbole specifies the return type of the function
def get_min_max(li: list, length: int) -> minmaxpair:
    pair = minmaxpair()

    if length == 1:  # if lenght is 1 then return min and max as the element
        pair.min = li[0]
        pair.max = li[0]
        return pair

    if li[0] < li[1]:  # take the first two elements and initilie the min and max
        pair.min = li[0]
        pair.max = li[1]
    else:
        pair.min = li[1]
        pair.max = li[0]

    for i in range(2, length):  # then change the values of min and max accordingly
        if li[i] > pair.max:
            pair.max = li[i]
        if li[i] < pair.min:
            pair.min = li[i]

    return pair


l = [1, 3, 3, 4, 10, -1]

res = get_min_max(l, 6)

print(res.min)
print(res.max)
