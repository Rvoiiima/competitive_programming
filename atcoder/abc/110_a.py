l  = [int(i) for i in input().split()]

l = sorted(l, reverse=True)
print(l[0]* 10 + l[1] + l[2])


