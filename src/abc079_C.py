l = input()

for i in range(1<<3):
    s = ""
    for k in range(3):
        if (i & (1<<k)):
            s += '+'
        else:
            s += '-'
    e = ""
    for i in range (3):
        e += l[i]
        e += s[i]

    e += l[3]

    if ( eval(e) == 7 ):
        e += "=7"
        print(e)
        break;
