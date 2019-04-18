# Given a range of numbers from 0 to 99, check whether they are divisible by 2 and then by 6 and then add them in a list
# Filtered list comprehension - [expression-involving-loop-variable for loop-variable in sequence `loop-variable in sequence if boolean-expression-involving-loop-variable`]

list = [x for x in range(100) if x % 2 == 0 and x % 6 == 0]
print(list)