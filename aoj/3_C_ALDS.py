from collections import deque
n = int(input())

d = deque()

for _ in range(n):
    com = input()
    if (com[0] == 'i'):
        com ,i = com.split()
        d.appendleft(int(i))
    elif (com[0] == 'd'):
        if (com[6] == ' '):
            com, i = com.split()
            try:
                d.remove(int(i))
            except ValueError:
                pass
        elif (com[6] == 'F'):
            d.popleft()
        elif (com[6] == 'L'):
            d.pop()
ans = map(str, d)
ans = " ".join(ans)
print(ans)
