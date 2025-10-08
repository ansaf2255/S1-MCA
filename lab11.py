yr=int(input("Enter a year:"))
if(yr%4==0 and (yr%100!=0 or yr%400==0)):
    print(yr, " is an leap year")
else:
    print(yr,"not a leap year")