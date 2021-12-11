n=int(input("Enter an integer"))
temp=n
rev=""
while(n>0):
    d=n%10
    rev+=str(d)
    n=int(n/10)
print(rev)

if int(rev)==temp:
    print("The number is palindrome")
else:
    print("The number is not palindrome")
    

