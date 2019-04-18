# Write a class called as Reverse iter that basically displays a list in reverse order

class ReverseIter:
    def __iter__(self, rev = 0):
        self.num = 1
        return self

    def __next__(self):
        pass

    my_list = [1,2,3,4,5]

for i in ReverseIter():
    print(i)
