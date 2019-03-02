N, M, X, Y = [int(i) for i in input().split()]
x_list  = [int(i) for i in input().split()]
y_list  = [int(i) for i in input().split()]

x_max = max(x_list)
y_min = min(y_list)

z_list = range(X+1, Y+1)

war = 1

if x_max >= y_min:
    pass
else:
    for i in range(x_max+1, y_min+1):
        if i in z_list:
            war = 0
            break

if war == 0:
    print("No War")
else:
    print("War")
            





