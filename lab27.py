class time:
    def __init__(self,hour,minute,second):
        self.__hour=hour
        self.__minute=minute
        self.__second=second
    def __add__(self,other):
        h=self.__hour+other.__hour
        m=self.__minute+other.__minute
        s=self.__second+other.__second
        
        if s>=60:
           m=m+(s//60)
           s%=60
        if m >=60:
           h=h+(m//60)
           m%=60
        h%=24
        return time(h,m,s)
    
    
    def display_time(self):
        print(self.__hour,":",self.__minute,":",self.__second)
        
    def __str__(self):
        return f"{self.__hour}:{self.__minute}:{self.__second}"
    
t1=time(22,34,67)
t2=time(34,75,65)
t3=t1+t2
t1.display_time()
t2.display_time()
print(t3)

    
        