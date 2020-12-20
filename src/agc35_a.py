import collections
n = int(input())
a = [int(i) for i in input().split()]

c = collections.Counter(a)
key = list(c.keys())
if (c[0] == n or (len(key)==2 and c[0] == n/3) or (len(key)==3 and (key[0] ^ key[1] ^ key[2] == 0) and (c[key[0]] == c[key[1]] == c[key[2]]))):
    print("Yes")
else:
    print("No")
