import sys

di = {}
def fizbuz(m):
    global di
    di = sorted(di.items())

    flag = False
    for i in di:
        if (m % i[0] == 0):
            print(i[1], end="")
            flag = True

    if not flag:
        print(m)

    print()

def main(lines):
    for v in lines:
        L = v.split() 
        for li in L:
            if ":" in li:
                atmp, stmp = li.split(":")
                di[int(atmp)] = stmp
            else:
                m = int(li)

        fizbuz(m)


if __name__ == '__main__':
    lines = []
    for l in sys.stdin:
        lines.append(l.rstrip('\r\n'))
    main(lines)
