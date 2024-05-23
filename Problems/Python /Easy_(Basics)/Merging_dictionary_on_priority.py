def merge(D1, D2, priority):
    if priority == 'first':
        return merge(D2, D1, 'second')
    D = dict()
    # First copy all key-value pairs in D1 to D
    for key in D1:
        D.update({key:D1[key]})
    # Copy all those key-value pairs in D2 to D
    # where the key is not already present in D
    for key in D2:
        D.update({key:D2[key]})
    return D
D1=dict(input())
D2=dict(input())
priority=input()
print(merge(D1,D2,priority))
