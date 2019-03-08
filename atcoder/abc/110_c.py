s_str = [ord(i) for i in input()]
t_str = [ord(i) for i in input()]

s = sorted(s_str)
t = sorted(t_str)

cnt_s = 1
cnt_t = 1
s_num = []
t_num = []

for i in range(len(s)-1):
    if s[i] == s[i+1]:
        cnt_s += 1
        if i == len(s)-2:
            s_num.append(cnt_s)
    else:
        s_num.append(cnt_s)
        cnt_s = 1
    if t[i] == t[i+1]:
        cnt_t += 1
        if i == len(s)-2:
            t_num.append(cnt_t)
    else:
        t_num.append(cnt_t)
        cnt_t = 1

s_num = sorted(s_num)
t_num = sorted(t_num)

if s_num == t_num:
    print("Yes")
else:
    print("No")

