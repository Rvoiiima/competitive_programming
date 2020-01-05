from collections import Counter

n = int(input())
v = [int(i) for i in input().split()]

o = v[1::2]
e = v[::2]

cnt_o = Counter(o).most_common() + [(0,0)]
cnt_e = Counter(e).most_common() + [(0,0)]

print(n-cnt_o[0][1]-cnt_e[0][1] if cnt_o[0][0] != cnt_e[0][0] else n-max(cnt_e[0][1]+cnt_o[1][1], cnt_e[1][1]+cnt_o[0][1]))



