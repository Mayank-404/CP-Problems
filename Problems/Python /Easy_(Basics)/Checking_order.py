def non_decreasing(L):
    #condition
    if len(L)==1:
        return True
    else:
        if L[0]<=L[1]:
            return non_decreasing(L[1:])
        else:
            return False
L=[1,2,3,4,7,6]

print(non_decreasing(L))
