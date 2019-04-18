class Bank:
    id = ""
    typeOfAccount = ""
    balance = ""
    transactionCount = 0

    def __init__(self, id, typeOfAccount, balance = 0):
        self.id = id
        self.typeOfAccount = typeOfAccount
        self.balance = balance
        Bank.transactionCount += 1

    def information(self):
        print("The account id of the customer is : {}".format(self.id))
        print("The type of account is : {}".format(self.typeOfAccount))
        print("The account balance is : {}".format(self.balance))

    def deposit(self, amount):
        self.balance = self.balance + amount
        print("The amount deposited is : {}".format(self.balance))

    def withdraw(self, amount):
        self.balance = self.balance - amount
        print("The withdrawn amount is : {}".format(self.balance))

    def display(self):
        print("The current balance is : {}".format(self.balance))
    
    def Transactions(self):
        print("No of transactions are : {}".format(Bank.transactionCount))

b1 = Bank(124, "Savings")
b1.information()
b1.deposit(1000)
b1.withdraw(100)
b1.display()
b1.Transactions()
print()
b2 = Bank(125, "FD")
b2.information()
b2.deposit(100000)
b2.display()
b2.Transactions()