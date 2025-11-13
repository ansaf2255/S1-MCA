a=input("enter a string:")
freq={}
for c in a:
    if c in freq:
        freq[c]+=1
    else:
        freq[c]=1
print(freq)