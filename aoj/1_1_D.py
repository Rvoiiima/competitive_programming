N = int(input())

l = [ int(input()) for _ in range(N) ]

mini = l[0]
maxi = l[1] - l[0]

for num in l[1:]:
    maxi = max(maxi, num  - mini)
    mini = min(mini, num)

print(maxi)

