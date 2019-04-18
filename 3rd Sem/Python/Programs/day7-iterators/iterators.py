# define a list
my_list = [4, 7, 0, 3]
my_iter = iter(my_list)
print(next(my_iter))
print(next(my_list))
print(my_iter.__next__())
print(my_iter.__next__())
next(my_iter)