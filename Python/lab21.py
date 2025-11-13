n = int(input("Enter num"))
a=0
b=1
print("fibonacci series:")
print(a)
for i in range(0,n-1):
    s=a+b
    a=b
    b=s
    print(a)