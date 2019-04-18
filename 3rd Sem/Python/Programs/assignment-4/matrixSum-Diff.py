def matrix(mat):
    for i in range(len(mat)):
        for j in range(len(mat[0])):
            print(mat[i][j],end="\t")
        print("\n")

def sum_matrix(n,mat1,mat2):
    sum_matrix=[]
    for i in range(0,n):
        a=[]
        for j in range(0,n):
            a.append(mat1[i][j]+mat2[i][j])
        sum_matrix.append(a)
    print("\n\nSum of the given two matrices : ")
    matrix(sum_matrix)
        
def diff_matrix(n,mat1,mat2):
    diff_matrix=[]
    for i in range(0,n):
        b=[]
        for j in range(0,n):
            b.append(mat1[i][j]-mat2[i][j])
        diff_matrix.append(b)
    print("\n\nDifference of the given two matrices : ")
    matrix(diff_matrix)
            
m=int(input("Enter the value of n for nxn matrix : "))
n=m
print("Enter the first matrix : ")
matrix1=[]
print("Enter the ",m," x ",n," matrix : ")
for i in range(m):
    matrix1.append(list(map(int, input().rstrip().split())))
    
print()
print()

print("Enter the second matrix : ")
matrix2=[]
print("Enter the ",m," x ",n," matrix : ")
for i in range(m):
    matrix2.append(list(map(int, input().rstrip().split())))

sum_matrix(m,matrix1,matrix2)
diff_matrix(m,matrix1,matrix2)