def pyramid(n):
    for i in range(n):
        for j in range(n-i-1):
            print("  ",end="")
        for k in range(2*i+1):
            print("* ",end="")
        print("")

def flip_pyramid(n):
    for i in range(n):
        for j in range(i+1):
            print("  ",end="")
        for k in range(2*n-1-2*i):
            print("* ")
        print("")
        
    
n=int(input("Please enter the number of rows"))
flip_pyramid(n)
