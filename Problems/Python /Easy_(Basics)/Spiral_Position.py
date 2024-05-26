def recursive_s(x1,x2,n):
    #x1 is starting point and x2 is ending point
    if n==1:
        #if the no. of spiral is 1 the the mid point is going to be the 1
        c=(x1+x2)/2
        return 1 and c
    else:
        return recursive_s((x1+x2)/2,(x2+((x2+x1)/2))/2,n-1)
x1=int(input(" Enter "))
x2=int(input(" Enter "))
n=int(input(" Enter "))
print(recursive_s(x1,x2,n))
