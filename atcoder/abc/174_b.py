seven = ""
k = int(input())
if (k%2==0):
    print("-1")

else:
    for i in range(1000000):
        seven += "7"
        if (int(seven) % k == 0):
            print(i+1)
            break

        

