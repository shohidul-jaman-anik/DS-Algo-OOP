class Bank:
    def __init__ (self,balance):
        self.balance=balance
        self.min_withdraw=100
        self.max_withdraw=1000000

    def get_balance(self):
        return self.balance
        
    def deposit(self,amount):
        if amount>0:
                self.balance +=amount
        
    def withdraw(self,amount):
        if amount < self.min_withdraw:
            print(f"You can't withdraw below {self.min_withdraw}")
        elif amount >  self.max_withdraw:
            print(f"You can't withdraw more than {self.max_withdraw}") 
        elif self.balance<amount:
            print("You haven't insufficent balance")           
        else :
            self.balance -= amount
            print(f"Here is your money {amount}")
            # print(f"Your total  balance {self.balance}")
            print(f"Your blance after withdraw {self.get_balance()}")
            
brack=Bank(15000)
brack.deposit(5000)
brack.withdraw(1000)
print(brack.get_balance())

dbbl=Bank(10000)
dbbl.deposit(3000)
dbbl.deposit(2000)
print(dbbl.get_balance())


# class Bank:
#     def __init__(self,balance) :
#         self.balance=balance
#         self.min_withdraw=100
#         self.max_withdraw=100000
    
#     def deposite(self)
#         self.