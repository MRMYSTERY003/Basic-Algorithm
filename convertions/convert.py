def dec_to_bin(num):
    temp = ''

    while num > 0:
        temp += str(num % 2)
        num //= 2
    print(temp[::-1])


def bin_to_dec(num):
    res = 0
    i = 0
    while num > 0:
        unit = num % 10
        res += unit * (2**i)
        num //= 10
        i += 1
    return res


print(bin_to_dec(101))


dec_to_bin(5)
