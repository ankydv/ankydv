import string

n=int(input("Enter the number of rows :"))
str=string.ascii_uppercase[:n]

for i in range(n):
    for j in range(i):
        print("  ",end="")
    for k in range(i,n):
        print(str[k]+" ",end="")
    for m in range(n-2,i-1,-1):
        print(str[m]+" ",end="")
    print("")


