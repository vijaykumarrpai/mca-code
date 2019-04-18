class Bank:
    'Transactions'
    balance = 0

    def deposit(self, amount):
        self.balance = self.balance + amount

    def withdraw(self, amount):
        self.balance = self.balance - amount
        if self.balance < 0:
            print("Bank balance is not sufficient")
            self.balance = self.balance + amount

    def display(self):
        return self.balance

A = Bank()
print(A.display())

amount = int(input("Enter the amount to be deposited : "))
A.deposit(amount)
print(A.display())

amount = int(input("Enter the amount to be withdrawn : "))
A.withdraw(amount)
print(A.display())

print(Bank.__name__)
print(Bank.__doc__)
print(Bank.__dict__)
print(Bank.__module__)
print(Bank.__bases__)