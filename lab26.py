class Bank:
    def __init__(self):
        self.name="Ansaf"
        self.balance=2000
    def deposit(self,amount):
        self.balance+=amount
        print("Amount deposited")
    def withdrawal(self,am):
        if am>self.balance:
            print("Insufficient funds")
        else:
            self.balance-=am
            print("Amount withdrawed")
    def check_amount(self):
        print("Balance: ",self.balance)
cust1=Bank()
while True:
    n=input("enter 1 for deposit, 2 for withdrawal, 3 to check balance, 4 to exit. enter your choice: ")
    if n=='1':
        amount=int(input("enter the amount to deposit: ").strip())
        cust1.deposit(amount)
    elif n=='2':
        amo=int(input("enter the amount to be withdrawed: ").strip())
        cust1.withdrawal(amo)
    elif n=='3':
        cust1.check_amount()
    elif n=='4':
        print("Exiting from program")
        exit()
    else:
        print("enter valid choice")