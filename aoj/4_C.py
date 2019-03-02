import sys
 
if __name__ == '__main__':
    num = int(input().strip())
    istr = sys.stdin.read()
    cmds = list(istr.splitlines())
 
    D = {}
    for i in cmds:
        if i[0] == "i":
            D[i[7:]] = 1
        elif i[0] == "f":
            if i[5:] in D:
                print("yes")
            else:
                print("no")
