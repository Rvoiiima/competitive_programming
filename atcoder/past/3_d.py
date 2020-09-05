board = [];

num = [["###", "#.#",  "#.#",  "#.#", "###"],
        [".#.", "##.", ".#.",".#.", "###"],
        ["###", "..#", "###", "#..", "###"],
        ["###", "..#", "###", "..#", "###"],
        ["#.#", "#.#", "###", "..#",  "..#"],
        ["###", "#..", "###", "..#", "###"],
        ["###", "#..", "###", "#.#", "###"],
        ["###", "..#",  "..#",  "..#", "..#"], 
        ["###", "#.#", "###", "#.#", "###"],
        ["###", "#.#", "###", "..#", "###"],
        ]

n = int(input())

for i in range(5):
    board.append(input())

"""
for i in range(5):
    for j in range(4*n+1):
        print(board[i][j], end="")
    print()

for i in range(1, n+1):
    for x in range(5):
        for y in range(3):
            print(board[x][4*i-3+y], end="")
        print()
"""



for i in range(1, n+1):
    for k in range(10):
        flag = True
        for x in range(5):
            for y in range(3):
                if (num[k][x][y] != board[x][4*i-3+y]):

                    flag = False
                    break

        if flag == True:
            print(k, end='')

print()


