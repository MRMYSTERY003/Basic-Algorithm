def find_dup(li):
    return len(li) != len(set(li))


li = [1, 2, 3, 4, 1]
res = find_dup(li)
if res:
    print("the list have duplicate elemetnts")
else:
    print("the list dosent have duplicate elements")
