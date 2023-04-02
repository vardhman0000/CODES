n = int(input("Enter a Number : "))
for i in range(n):
    for j in range(1,n-1):
        print(" ",end="")
    for k in range(i):
            print("*",end=" ")
    print()