s=input("enter a string")
l=len(s)
char=''
for i in range(l-3,l):
    char+=s[i]
if char=='ing':
    s+='ly'
    print(s)
else:
    s+='ing'
    print(s)

