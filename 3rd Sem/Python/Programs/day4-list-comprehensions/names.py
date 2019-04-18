# Given a list of names display first letter and last letter of the names and create it as dictionary
list = ['Apple', 'Banana', 'Cat']
d = ({x[0]: x[len(list)-1] for x in list})
print(d)