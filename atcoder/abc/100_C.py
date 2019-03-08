N = int(input())
A = [int(i) for i in input().split()]
count = 0
flag = 1
while flag != 0:
    flag = 0
    for i, a in enumerate(A):
        if a % 2 == 0:
            A[i] = a/2
            count += 1
            flag = 1
print(count)
