import csv

with open("file.csv") as file1:
    reader = csv.reader(file1)
    for row in reader:
        print(row)