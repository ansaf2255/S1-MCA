import csv

dict1=[
    {"1":"Hello", "2":"Apple", "3":"Ball"},
    {"1":"Good", "2":"Bad", "3":"Ugly"}
    ]

with open("csv.csv", "w") as file:
    writer = csv.DictWriter(file, fieldnames=["1", "2","3"])
    writer.writeheader()
    writer.writerows(dict1)
    
with open("csv.csv", "r") as file1:
    file = csv.DictReader(file1)
    for row in file:
        print(row)