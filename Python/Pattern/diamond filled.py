n=6
for i in range(n):
    for j in range(n-i):
        print(" ",end="")
    for k in range(i+1):
        print("*",end=" ")
    print("\n")


n=5
for i in range(n):
    for j in range(i):
        print(" ",end="")
    for k in range(n-i):
        if k==0:
            print(" *",end="")
        else:
            print("*",end=" ")
    print("\n")