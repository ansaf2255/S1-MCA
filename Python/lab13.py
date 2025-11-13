text = input("Enter a string: ")
if len(text)<2:
    print("String is too short toexchange characters")
else:
    tex=text[-1]+text[1:-1]+text[0]
print("string after exchanging characters is:",tex)
