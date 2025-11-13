# num1=int(input("Enter num 1"))
# num2=int(input("Enter num 2"))
# if num1>num2:
#     a=num1
#     b=num2
# else :
#     a=num2
#     b=num1
# c=25
# while c>0:
#     c=a%b
#     a=b
#     b=c   
# print(b)
def gcd(x,y):
    while(y!=0):
        x,y=y,x%y
    return x
print(gcd(8372173,213674627))