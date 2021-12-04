n=5
space="     "
for i in range(n):
    for j in range(n):
        if i==0 or i==n-1 or j==0 or j==n-1:
            print("*",end=space)
        else:
            print(" ",end=space)
    print("\n")