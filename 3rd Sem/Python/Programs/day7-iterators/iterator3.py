class InfIter:
    def __iter__(self):
        self.num = 1
        return self

    def __next__(self):
        num = self.num
        self.num += 2
        return num

for i in InfIter():
    print(i)