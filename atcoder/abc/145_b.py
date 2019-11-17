n = int(input())
s = input()

flag = True

if (n%2 != 0):
    flag = False
else:
    s1 = s[:int(n/2)]
    s2 = s[int(n/2):]
    if (s1 != s2):
        flag = False

if flag:
    print("Yes")
else:
    print("No")
