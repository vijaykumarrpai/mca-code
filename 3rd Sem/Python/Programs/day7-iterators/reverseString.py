# Pass a string to generator function and display its contents in reverse
def reverse_string(my_str):
    length = len(my_str)
    for i in range(length - 1, -1, -1):
        yield my_str[i]
    return

for char in reverse_string("hello how are you?"):
    print(char)