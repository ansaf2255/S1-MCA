with open("output.txt", "r") as file1, open("new1.txt", "w") as file2:
    count = 0
    for line in file1:
        count += 1
        if count % 2 != 0:   
            file2.write(line)
