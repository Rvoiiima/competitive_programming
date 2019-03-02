N = input()
cus = 0

for i in range(N):
    l = (map(int, raw_input().split()))
    cus += (l[1] - l[0] + 1)

print cus
