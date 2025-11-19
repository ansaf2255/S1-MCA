import csv

with open("file.csv") as file1:
    reader = csv.reader(file1)
    
    cols = [0, 2]   

    for row in reader:
        selected = [row[i] for i in cols]
        print(selected)
    