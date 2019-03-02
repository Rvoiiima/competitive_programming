import sys

pole_names = ["A", "B", "C"]
def print_hanoi(poles):
    for i, pole in enumerate(poles):
        sys.stdout.write(pole_names[i])
        for j in pole:
            sys.stdout.write(" {}".format(j))
        print ""
    print ""
            


def hanoi(poles, n, start, end):
    if n == 1:
        poles[end].append(poles[start].pop())
    
        print_hanoi(poles)

        return 

    relay = 3 ^ start ^ end
    
    hanoi(poles, n-1, start, relay)
    hanoi(poles, 1, start, end)
    hanoi(poles, n-1, relay, end)
    

if __name__ == '__main__':
    n = input()
    poles = [[i for i in range(n , 0, -1)],[],[]]
    
    print_hanoi(poles)
    hanoi(poles, n, 0, 2)
    

