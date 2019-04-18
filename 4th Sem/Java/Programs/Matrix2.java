import java.io.*; 
import java.util.*; 
public class Matrix2 { 
  
    final static int MAX = 100; 
  
// function to find the smallest 
// element in each row.  
//     static void smallestInRow(int mat[][], int n, int m) { 
//         System.out.print(" { "); 
//         for (int i = 0; i < n; i++) { 
  
//             // initialize the smallest element  
//             // as first element  
//             int small = mat[i][0]; 
  
//             for (int j = 1; j < m; j++) { 
  
//                 // check if any element is smaller  
//                 if (mat[i][j] < small) { 
//                     small = mat[i][j]; 
//                 } 
//             } 
  
//             // print the smallest element of the row  
//             System.out.print(small + ", "); 
//         } 
//         System.out.println("}"); 
//     } 
  
// // function to find the largest 
// // element in each column.  
//     static void largestInCol(int mat[][], int n, int m) { 
  
//         System.out.print(" { "); 
//         for (int i = 0; i < m; i++) { 
  
//             // initialize the largest element  
//             // as first element  
//             int large= mat[0][i]; 
  
//             // Run the inner loop for columns  
//             for (int j = 1; j < n; j++) { 
  
//                 // check if any element is larger
//                 if (mat[j][i] > large) { 
//                     large= mat[j][i]; 
//                 } 
//             } 
  
//             // print the largest element of the column  
//             System.out.print(large + ", "); 
//         } 
  
//         System.out.print("}"); 
//     } 

    public static void main(String args[]) { 
        int n = 3, m = 4; 
        int mat[][] = {{4, 2, 3,1}, 
        {9,6,12,7}, 
        {5,10,11,8}}; 
System.out.println("inserted values");
for (int[] row : mat) 
  
            // converting each row as string 
            // and then printing in a separate line 
            System.out.println(Arrays.toString(row));
  
        // System.out.print("Minimum element of each row is "); 
        // smallestInRow(mat, n, m); 
  
        // System.out.print("\nMaximum element of each column is "); 
        // largestInCol(mat, n, m); 
    } 
} 
  