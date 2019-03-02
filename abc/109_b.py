N = int(input())

words = []

flag = 0

for i in range(N):
    w = input()
#    print(words)
    words.append(w)
    if i == 0:
        continue
    if words[i-1][-1] != w[0]:
        flag = 1

sets = set(words)

if len(sets) != len(words):
    flag = 1

if flag == 1:
    print('No')
else:
    print('Yes')
