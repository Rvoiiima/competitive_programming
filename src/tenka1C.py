def print_ans():
    N = int(input())

    for n in xrange(1,3501):
        for h in xrange(1,3501):
            v =  (4 * n * h - N * n - N * h)
            if v < 0:
                continue
            w , mod = divmod(N * h * n, v)
            if not mod:
                print w, h, n
                return
    
print_ans()
