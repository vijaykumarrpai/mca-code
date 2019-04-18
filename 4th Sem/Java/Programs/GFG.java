public class GFG { 
  
    final static int MAX = 100; 
  
// function to find the minimum  
// element of each column.  
    static void smallestInCol(int mat[][], int n, int m) { 
  
        System.out.print(" { "); 
        for (int i = 0; i < m; i++) { 
  
            // initialize the minimum element  
            // as first element  
            int minm = mat[0][i]; 
  
            // Run the inner loop for columns  
            for (int j = 1; j < n; j++) { 
  
                // check if any element is smaller  
                // than the minimum element of the column  
                // and replace it  
                if (mat[j][i] > minm) { 
                    minm = mat[j][i]; 
                } 
            } 
  
            // print the smallest element of the row  
            System.out.print(minm + ", "); 
        } 
  
        System.out.print("}"); 
    } 
  
// Driver code 
    public static void main(String args[]) { 
        int n = 3, m = 3; 
        int mat[][] = {{2, 1, 7}, 
        {3, 7, 2}, 
        {5, 4, 9}}; 
  
        System.out.print("Biggest element of each column is "); 
        smallestInCol(mat, n, m); 
    } 
}