import numpy as np
a = np.array([1,2,3])
print(a)
print(type(a))
print()
a = np.array([1,2,3], dtype=complex)
print(a)
print(type(a))
print()
a = np.array(['a','b','c'])
print(a)
print(type(a))
print()
a = np.array([(1,2,3),(4,5,6)])
print(a)
print(type(a))
print()
a = np.array([1,2,3,4,5],ndmin=3)
print(a)
print(type(a))
print()
a = np.array([1,0,3],dtype=bool)
print(a)
print()
a = np.array([1,0,3],dtype=float)
print(a)
print()
a = np.array([1,0,3], dtype='object')
print(a)
print()
a = np.array([1,2,4,'a'],dtype=object)
print(a)
print(type(a))

#arrays - function
#zeroes, zeroes_like
#empty, empty_like
#full, full_like
#eye, identity
#array
#asanyarray
#arange
#ones, ones_like
print()

a = np.asanyarray([1,2,3])
print(a)
print(type(a))
print()
a = np.arange(1,10,2)
print(a)
print(type(a))
print()
a = np.ones(2)
print(a)
print(type(a))
print()
a = np.ones((2,3))
print(a)
print(type(a))
print()
a = np.ones_like((2,3))
print(a)
print(type(a))
print()
a = np.zeros((2,3))
print(a)
print(type(a))
print()
a = np.zeros_like((2,3))
print(a)
print(type(a))
print()
a = np.eye(2)
print(a)
print(type(a))
print()
a = np.identity(2)
print(a)
print(type(a))
print()
a = np.empty(2)
print(a)
print(type(a))
print()
a = np.empty([2,2])
print(a)
print(type(a))
print()
a = np.full(2,10)
print(a)
print(type(a))
print()
l = [(1,2,3), (1,2,3)]
a = np.full_like(l,10)
print(a)
print(type(a))

print()

# shape - <array_name>.shape
# data type - <array_name>.dtype
# size - <array_name>.size
# number of dimensions - <array_name>.ndim

arr = np.array([1,2,3])
print(arr.shape)
print(arr.dtype)
print(arr.size)
print(arr.ndim)
print()
arr = np.array([1,2,3], dtype=bool)
print(arr.shape)
print(arr.dtype)
print(arr.size)
print(arr.ndim)
print()
arr = np.array([1,2,3], dtype=object)
print(arr.shape)
print(arr.dtype)
print(arr.size)
print(arr.ndim)
print()
# basic indexing and slicing methods
# array_name[index]
# array_name[starting_pos, ending_pos]
# array_array_name[:]
# array_name[row_index][col_index]
# array_name[row_index, col_index]
# array_name[slice_num: slice_num]

arr = np.array([1,2,3,4,5,6,7,8])
print(arr[3])
print(arr[1:2])
print(arr[:])
print()
arr = np.array([(1,2,3),(4,5,6),(7,8,9)])
print(arr[:2])
print(arr[1,:2])
print(arr[1,2])
print(arr[:2,2])