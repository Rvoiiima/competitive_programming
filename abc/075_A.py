from timeit import timeit
A = [1,2,2]

def line():
     a = A[0]^A[1]^A[2]

def ifs():
    if A[0] == A[1]:
        a = A[2] 
    elif A[1] == A[2]:
        a = A[0]
    else:
        a = A[1]

print("line:",timeit(line, number=10000000))
print("ifs:", timeit(ifs, number=10000000))


