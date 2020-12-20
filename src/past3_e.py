n = int(input())

board = []

for i in range(n):
    board.append(input())

bool_al = [[0] * 26 for i in range(n)]

for i in range(n):
    for k in range(n):
        bool_al[i][ord(board[i][k])-97] = 1

"""
for i in range(n):
    for k in range(26):
        print(bool_al[i][k], end="")
    print()
"""


ans = [board[n//2][0] for i in range(n)]

for i in range(n//2):
    flag = False
    for k in range(26):
        if (bool_al[i][k] == 1 and bool_al[n-1-i][k] == 1):
            ans[i] = ans[n-1-i] = chr(k+97)
            flag = True
            break
    if (flag == False):
        ans = -1
        break

if (ans != -1):
    ans = "".join(ans)
print(ans)
    
