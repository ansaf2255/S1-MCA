# x = int(input("Enter the number: "))
# if x%2==0:
#     print("Number is even")
# else:
#     print("""Number is odd 
#           dncjc
#           ancj
#           acknsc
#           ksncksan""") 

# x = int(input("Enter the current year: "))
# if x%2==0:
#     print("Number is even")
# else:
#     print("""Number is odd 
#           dncjc
#           ancj
#           acknsc
#           ksncksan""")

    
from datetime import datetime

current_datetime = datetime.now()


year = current_datetime.year
print(year)

final=int(input("enter the final year: "))

print("leap years are:")
for x in range(year,final):
    if (x%4==0 and x%100!=0) or x%400==0:
        print(x)



    
    