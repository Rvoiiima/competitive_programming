h, w = (int(i) for i in input().split())
a = []

for i in range(h):
    if i % 2 == 0:
        a.extend(input().split())
    else:
        a.extend(input().split()[::-1])

ans = ''

print(a)

"""
for i in range(h):
    if i%2 ==0:
        for j in range(w):
            if a[i][j] != 1:
                ans += str(i) + ' ' + str(j) + ' ' + str(i+1) + ' ' + str(j+1) + ' 
"""
