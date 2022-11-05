

def rev(li: list, length: int) -> list:
    start = 0
    end = length - 1

    while start < end:
        # access the elements of the list and swap the element in binary manner
        li[start], li[end] = li[end], li[start]
        start += 1
        end -= 1

    return li


li = [1, 2, 3, 4, 5]

print(rev(li, len(li)))
