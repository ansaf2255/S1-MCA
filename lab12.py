
import math
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = int(input("Enter the third number: "))
x = b**2 - 4*a*c
if x < 0 : 
    print("Cannot be determined")
elif x == 0 :
    qe = -b/(2*a)
    print(qe)
else:
    qe2 = (-b + math.sqrt(x))/(2*a)
    qe3 = (-b - math.sqrt(x))/(2*a)
    print(qe3)
    print(qe2)