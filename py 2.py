a = [3,2,4,5,8,-3,-9,-5]

print("Positive integers are = ")
for i in a:
    if i > 0:
        print(i)
 
 
        

b = int(input("Enter the number "))
for i in range(1,b+1):
    print(i**2)




c = input("Enter the word: ")

vowels = ['a','e','i','o','u']

for i in c:
    if i in vowels:
        print(i)




xy=input("enter a letter: \n" )  
for i in xy:
    print("ordinary value of "+i+" is:")
    print(ord(i))

