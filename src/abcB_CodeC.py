N = int(input())
l = map(int , raw_input().split())

odd = 1

for i in l:
    if (i % 2 == 0):
        odd *= 2
    else:
        odd *= 1

print 3**N - odd
