n = int(input())
a = [int(x) for x in input().split()]
ans = 1
flag = False
zeros = False
over = pow(10,18)
for i in a:
    if flag == False:
        ans *= i
    if (ans > over):
        flag = True
    if i == 0:
        zeros = True

if (flag):
    ans = -1
if (zeros):
    ans = 0

print(ans)


